package main

import "core:fmt"

// THIS CODE LMAOO ITS SO BAD PLEASE DONT PAY ATTENTION 😭
FtoC :: proc(f: f32) -> f32 {
    return (f - 32) * 5/9
}

CtoF :: proc(c: f32) -> f32 {
    return (c * 9/5) + 32
}

LbtoKg :: proc(lb: f32) -> f32 {
    return lb * 0.45359237
}

KgtoLb :: proc(kg: f32) -> f32 {
    return kg / 0.45359237
}

IntoCm :: proc(inch: f32) -> f32 {
    return inch * 2.54
}

CmtoIn :: proc(cm: f32) -> f32 {
    return cm / 2.54
}

main :: proc() {

}