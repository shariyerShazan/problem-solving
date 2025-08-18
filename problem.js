
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
    const sum = 0
    for(let i = 0 ; i < array.length ; i++){
         sum += array[i]
   }
   console.log(`[${array}], sum of this arrays element is = ${sum}`)
}

sumOfNumber([ 35 , 32 , 50 , 46 , 66 ,49 , 109])