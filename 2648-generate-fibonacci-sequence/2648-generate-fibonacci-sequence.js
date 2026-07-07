/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let current = 0;
    let next = 1;

    while(true){
        yield current;

        let stemp = current;
        current = next;
        next = stemp + current;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */