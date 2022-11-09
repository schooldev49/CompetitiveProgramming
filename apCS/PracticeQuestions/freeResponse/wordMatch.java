public class WordMatch 
{ 
/** The  secret  string.  */ 
private String secret; 
/** Constructs  a  WordMatch object  with  the  given  secret  string  of  lowercase  letters.  */ 
public WordMatch(String word) 
{ 
  secret = word; 
} 
/** Returns  a  score  for  guess, as  described  in  part  (a). 
*  Precondition: 0 < guess.length() <= secret.length() 
*/ 
public int scoreGuess(String guess) 
{ 
  char[] charArr = guess.toCharArray();
  int answer = 0;
  for (char i: charArr){
    if (this.secret.indexOf(i) >= 0){
      answer++;
    }
  }
  return answer;
} 
/** Returns the better of two guesses, as determined by scoreGuess and the rules for a 
*  tie-breaker  that  are  described  in  part  (b). 
*  Precondition:  guess1 and  guess2 contain  all  lowercase  letters. 
* guess1 is  not  the  same  as  guess2. 
*/ 
public String findBetterGuess(String guess1, String guess2) 
{ 
  int guess1Ans = scoreGuess(guess1);
  int guess2Ans = scoreGuess(guess2);
  
  return (guess1Ans > guess2Ans) ? guess1 : guess2;
} 
 
} 
