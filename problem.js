
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