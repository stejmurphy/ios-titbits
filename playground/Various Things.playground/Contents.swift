//: Playground - noun: a place where people can play

import UIKit


let nickName: String? = nil

let fullName: String? = "Stephen M"

let informalGreeting = "Hi, \(nickName ?? fullName)"



let interestingNumbers = [
    "Prime": [2, 3, 5, 7, 11, 13],
    "Fibonacci": [1, 1, 2, 3, 5, 8],
    "Square": [1, 4, 9, 16, 25],
]

var largest = 0


for (kind, numbers) in interestingNumbers {
    
    for number in numbers {
        
        if number > largest {
            largest = number
    
    
        }
        
    }

}

print(largest)

var total = 0

for i in 0..<4 {
    total += i
}

print(total)



func returnFifteen() -> Int {
    var y = 10
    func add() {
        y += 10
    }
    add()
    return y
}
returnFifteen()



var numbers = [20, 19, 7, 12]
numbers.map({
    (number: Int) -> Int in
    let result = 3 * number
    return result
})





