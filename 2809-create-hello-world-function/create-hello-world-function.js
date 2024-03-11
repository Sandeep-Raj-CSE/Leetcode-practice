/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
       // console.log("Hello World");
       return "Hello World";
        
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */