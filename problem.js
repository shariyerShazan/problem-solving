
// problem one
const reverseString= (string)=>{
    let reverse = ""
    for(let i = (string.length-1) ; i>= 0 ; i--){
        reverse += string[i]
    }
    console.log(`"${string}" it's reverse is: ${reverse}`)
}
reverseString("shazan")


// problem two 
const countVowel = (string)=>{
        let count = 0
       const vowel = "aeiou"
       for(let i = 0 ; i< string.length ; i ++){
           if(vowel.includes(string[i].toLocaleLowerCase())){
            count++
           }
       }
       console.log(`"${string}": total vowel is ${count}`)
}
countVowel("shazanA")



// problem three
const checkPalindrome = (string)=>{
    let reverse = ""
    const prevString = string
    for(let i = (string.length - 1) ; i>=0 ; i--){
          reverse += string[i] ;
    }
    console.log(`"${string}", this is a palindrome? ans: ${reverse === prevString ? true : false}`)
}
checkPalindrome("mam")
checkPalindrome("shazan")



// problem four
const findMaxNumber = (array)=>{
    let maxNum = 0
    for(let i = 0 ; i < array.length ; i++){
           if(array[i]> maxNum){
            maxNum = array[i]
           }
    }
    console.log(`[${array}], in this array max num is ${maxNum}`)
}
findMaxNumber([33, 43 , 29 , 96 , 100 , 120 , 24 , 43])




// problem five
const removeDuplicareFromArray = (array)=>{
          const newArray = []
          for(let i = 0 ; i < array.length ; i++){
               if(!newArray.includes(array[i])){
                   newArray.push(array[i])
               }
          }
          console.log(`[${array}], after remove the duplicate array is = [${newArray}]`)
}
removeDuplicareFromArray([33, 43 , 29 , 33 , 120 , 120 , 24 , 43 , 29])





// problem six
const sumOfNumber = (array)=>{
    let sum = 0
    for(let i = 0 ; i < array.length ; i++){
         sum += array[i]
   }
   console.log(`[${array}], sum of this arrays element is = ${sum}`)
}

sumOfNumber([ 35 , 32 , 50 , 46 , 66 ,49 , 109])



// problem seven
const findEvenNumber = (array)=>{
    let evenNumber = []
    for(let i =0 ; i < array.length ; i++){
        if(array[i] %2 == 0){
            evenNumber.push(array[i])
        }
    }
   console.log(`[${array}], arrays even number is [${evenNumber}]`)
}
findEvenNumber([7 , 21 , 44 , 56 , 53 , 98 , 67])




// problem eight
const capitalizeWord = (sentence)=>{
    let word = sentence.split(" ")
    for(let i = 0 ; i < word.length ; i++){
         word[i] = word[i][0].toUpperCase() + word[i].slice(1)
    }
    console.log(`"${sentence}" , after capitalize first letter of every word = ${word.join(" ")}`)
}
capitalizeWord("shariyer shazan")



// problem nine
const factorialOfNumber = (number)=>{
     let factorial = 1 
     for(let i = 1 ; i<= number ; i++){
        factorial *= i
     }
     console.log(`factorial of "${number}" is = ${factorial}`)
}
factorialOfNumber(5)



// problem ten
function pingPong(number) {
    for (let i = 1; i <= number; i++) {
      if (i % 3 === 0 && i % 5 === 0) {
        console.log("PingPong");
      } else if (i % 3 === 0) {
        console.log("Ping");
      } else if (i % 5 === 0) {
        console.log("Pong");
      } else {
        console.log(i);
      }
    }
  }
pingPong(20);
  