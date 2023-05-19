package main

import "core:fmt"

// takes slice of array, loops through it, swapping values that arent in order
sort :: proc(arr: ..int) -> []int {
    for j in 0..<len(arr) {
        for i in 0..<len(arr)-j-1 {
            if arr[i] > arr[i + 1] {
                temp := arr[i]
                arr[i] = arr[i + 1]
                arr[i + 1] = temp
            }
        }
    }


    return arr
}

main :: proc() {
    z := []int{4, 6, 8, 0, 6, 98} // expected value: 0, 4, 6, 6, 8, 98
    x := sort(..z)
    for n in x {
        fmt.println(n);
    }
}