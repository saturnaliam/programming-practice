const bogoSort = (list) => {
    const startTime = new Date();
    let unsortedList = [];
    let sortedList = [];
    let timesFailed = 1;
    let totalWrongValues = 0;

    process.stdout.write("\u001B[?25l");
    while (true) {
        unsortedList = [...list]; // Copies the original list passed in to a new variable

        process.stdout.cursorTo(0);
        process.stdout.write("Ran " + timesFailed + " times. ");     
        
        for (let i = 0; i < list.length; i++) {
            index = Math.floor(Math.random() * unsortedList.length);
            sortedList[i] = unsortedList[index];
            unsortedList.splice(index, 1);
        }
        
        unsortedNums = 0; // How many numbers aren't in the correct place.
        for (let i = 0; i < sortedList.length; i++) if (sortedList[i] > sortedList[i + 1]) unsortedNums++;

        if (unsortedNums == 0) break;
        
        totalWrongValues += unsortedNums;
        timesFailed++;
        process.stdout.write(totalWrongValues + " total numbers have been in the wrong place.");
    }

    process.stdout.write("\nTook " + (new Date() - startTime) + "ms.\n\u001B[?25h");
    return sortedList;
}

let z = [];
let index = 0;
for (let i = 0; i <= 5; i++) {
    z[index] = i;
    index++;
}

console.log(bogoSort(z));