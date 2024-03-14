const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the number of elements in the array: ", (n) => {
    n = parseInt(n);
    let array = [];

    console.log("Enter the elements of the array:");
    rl.on('line', (input) => {
        array.push(parseInt(input));
        if (array.length === n) {
            rl.close();

            // Sort the array
            for (let i = 0; i < n - 1; i++) {
                let min = i;
                for (let j = i + 1; j < n; j++) {
                    if (array[j] < array[min]) {
                        min = j;
                    }
                }
                if (min !== i) {
                    let swap = array[i];
                    array[i] = array[min];
                    array[min] = swap;
                }
            }

            // Print the sorted array
            console.log("The sorted array:");
            console.log(array.join("\t"));
        }
    });
});
