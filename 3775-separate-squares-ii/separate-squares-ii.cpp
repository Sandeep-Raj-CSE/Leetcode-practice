class Solution {
public:
    struct Event {
        double y;
        int type;      // +1 = add, -1 = remove
        int l, r;      // compressed x indices
    };

    vector<double> xs;
    vector<int> cnt;
    vector<double> seg;

    void pushUp(int node, int l, int r) {
        if (cnt[node] > 0) {
            seg[node] = xs[r + 1] - xs[l];
        } else if (l == r) {
            seg[node] = 0;
        } else {
            seg[node] = seg[node * 2] + seg[node * 2 + 1];
        }
    }

    void update(int node, int l, int r, int ql, int qr, int val) {
        if (ql > r || qr < l) return;
        if (ql <= l && r <= qr) {
            cnt[node] += val;
            pushUp(node, l, r);
            return;
        }
        int mid = (l + r) / 2;
        update(node * 2, l, mid, ql, qr, val);
        update(node * 2 + 1, mid + 1, r, ql, qr, val);
        pushUp(node, l, r);
    }

    double separateSquares(vector<vector<int>>& squares) {

        vector<Event> events;
        xs.clear();

        for (auto &s : squares) {
            double x1 = s[0];
            double x2 = s[0] + s[2];
            double y1 = s[1];
            double y2 = s[1] + s[2];

            xs.push_back(x1);
            xs.push_back(x2);

            events.push_back({y1, +1, 0, 0});
            events.push_back({y2, -1, 0, 0});
        }

        sort(xs.begin(), xs.end());
        xs.erase(unique(xs.begin(), xs.end()), xs.end());

        int m = xs.size();
        cnt.assign(4 * m, 0);
        seg.assign(4 * m, 0);

        int idx = 0;
        for (auto &s : squares) {
            double x1 = s[0];
            double x2 = s[0] + s[2];
            int l = lower_bound(xs.begin(), xs.end(), x1) - xs.begin();
            int r = lower_bound(xs.begin(), xs.end(), x2) - xs.begin() - 1;

            events[idx].l = l;
            events[idx].r = r;
            idx++;

            events[idx].l = l;
            events[idx].r = r;
            idx++;
        }

        sort(events.begin(), events.end(),
             [](const Event &a, const Event &b) {
                 return a.y < b.y;
             });

        double totalArea = 0;
        double prevY = events[0].y;

        for (auto &e : events) {
            double currY = e.y;
            double height = currY - prevY;
            totalArea += seg[1] * height;

            update(1, 0, m - 2, e.l, e.r, e.type);
            prevY = currY;
        }

        double half = totalArea / 2.0;
        double area = 0;
        prevY = events[0].y;

        fill(cnt.begin(), cnt.end(), 0);
        fill(seg.begin(), seg.end(), 0);

        for (auto &e : events) {
            double currY = e.y;
            double height = currY - prevY;
            double stripArea = seg[1] * height;

            if (area + stripArea >= half) {
                double need = half - area;
                return prevY + need / seg[1];
            }

            area += stripArea;
            update(1, 0, m - 2, e.l, e.r, e.type);
            prevY = currY;
        }

        return prevY;
    }
};