const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function bubbleSort(array) {
    const n = array.length;
    let flag;

    for (let i = 0; i < n - 1; i++) {
        flag = 0;
        for (let j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                [array[j], array[j + 1]] = [array[j + 1], array[j]]; // Swap elements
                flag = 1;
            }
        }
        if (flag === 0) {
            break;
        }
    }

    return array;
}

rl.question("Enter the size of the array: ", (size) => {
    size = parseInt(size);
    let array = [];

    rl.question("Enter the array elements separated by spaces: ", (elements) => {
        array = elements.split(" ").map(Number);

        const sortedArray = bubbleSort(array);

        console.log("Sorted array is:");
        console.log(sortedArray.join(" "));

        rl.close();
    });
});
