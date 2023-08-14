# Write your MySQL query statement below


#simply left join karo 
# product_id jiska jisak same hai usko product name

select p.product_name, s.year, s.price 

From Sales AS s

INNER JOIN 

Product AS p

ON 

s.product_id = p.product_id;