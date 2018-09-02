#include<stdio.h>
#include <stdbool.h>
bool lifeline5050 (char option1, char option2, char correctOption)
{
  char answer;
  printf ("You have two options from which one is correct:\n");
  printf ("The first correct option can be: %c\n", option1);
  printf ("The second correct option can be: %c\n", option2);
  printf ("Enter your option\n");
  getchar ();
  scanf ("%c", &answer);
  if (answer == correctOption)
    {
      return true;
    }
      return false;
}
int main ()
{
  char answer, flag;
  int score;
  bool flag5050 = false;
  printf("WELCOME TO KBC\n WITHOUT WASTING MUCH TIME,LET's PLAY\n");
  printf("RULES ARE AS FOLLOWS: 15 QUESTIONS WILL BE THERE ON YOUR COMPUTER SCREEN ONE AFTER THE OTHER, UNLESS YOU GIVE A WRONG ANSWER, A LIFELINE 50-50 WILL ALSO BE THERE FOR YOU! SO USE IT WISELY AND PLAY CAREFULLY!\n");
  printf ("ARE YOU READY? Press y for yes n for no\n");
  scanf ("%c", &flag);
  if (flag == 'y')
    printf ("Lets play\n");
  else
    {
      printf ("PLAY SOME OTHER TIME THANKS\n");
      return 0;
    }
  printf("1.Which word is spelt wrong in every dictionary?\nYour Options are:\na) nuisance?\nb) arrogance\nc) wrong\nd) wrogn\n");
    if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'c')
    {
      score = 1000;
      printf("You are correct!\n Your Current Score is %d\n \n ", score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'a', 'c'))
            {
              flag5050 = true;
              score = 1000;
              printf("You are correct!\n Your Current Score is %d\n \n ", score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("Oops Thats a wrong answer 1!\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Lets move on to Question NO.2 for 10000\n");
  printf("2.Which Indian recently Dedicated his Gold medal of Asian games to Atal Bihari Vajpayee, The former PM of India?\nYour Options are:\na) SAINA NEHWAL?\nb) NEERAJ CHOPRA\nc) HIMA DAS\nd) DUTEE CHAND\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'b')
    {
      score = 10000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('b', 'a', 'b'))
            {
              flag5050 = true;
              score = 10000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (b)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Next question is for 20000, There on your screen!\n");
  printf("3.Who among the following felicitates the winners of National Filmfare Award?\nYour Options are:\na) Prime Minister ?\nb) President\nc) Vice President\nd) Chief of CBFC\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
    getchar ();
  scanf ("%c", &answer);
  if (answer == 'b')
    {
      score = 20000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'b', 'b'))
            {
              flag5050 = true;
              score = 20000;
              printf("You are correct!\n Your Current Score is %d\n \n ", score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (b)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Fourth Question for 40000, There on your screen! \n");
  printf("4.What is the IQ number range of a normal/AVERAGE human beings?\nYour Options are:\na) 50-70 ?\nb) 70-90\nc) 130-160\nd) 90-110\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
    getchar ();
  scanf ("%c", &answer);
  if (answer == 'd')
    {
      score = 40000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('a', 'd', 'd'))
            {
              flag5050 = true;
              score = 40000;
              printf
                ("You are correct!\n Your Current Score is %d\n \n ",
                 score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (d)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Fifth Question for 80000, There on your screen! \n");
  printf ("5.Who among the following Indian is not a recepient of Miss World Title?\nYour Options are:\na) Priyanka Chopra ?\nb) Manushi Chillar\nc) Sushmita Sen\nd) Aishwarya Rai Bachhan\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'c')
    {
      score = 80000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'a', 'c'))
            {
              flag5050 = true;
              score = 80000;
              printf("You are correct!\n Your Current Score is %d\n \n ", score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (c)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Fourth Question for 160000, There on your screen! \n");
  printf
    ("6.Which of the following constitutional posts is enjoyed for a fixed term?\nYour Options are:\na) President ?\nb) Chief Justice\nc) Prime Minister\nd) Governor\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'a')
    {
      score = 160000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'a', 'a'))
            {
              flag5050 = true;
              score = 160000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (a)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf("CONGRATULATION! YOU HAVE REACHED THE MID OF THE GAME AND OFCOURSE THE LEVEL IS GONNA INCREASE FROM HERE ONWARDS. SO HERE'S YOUR NEXT QUESTION\n");
  printf("7.The wife of which of the following sportsperson represent INDIA in SQUASH?\nYour Options are:\na) ISHANT SHARMA?\nb) DINESH KARTIK\nc) MILKHA SINGH\nd) P.GOPICHAND\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'b')
    {
      score = 320000;
      printf("You are correct!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('b', 'a', 'b'))
            {
              flag5050 = true;
              score = 320000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (b)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Eigth Question for 640000, There on your screen! \n");
  printf("8.Which of these festivals is celebrated to commemorate Lord Krishna's lifting of the mountain?\nYour Options are:\na) ONAM?\nb) GOKUL ASHTAMI\nc) DHANTERAS\nd) GOVARDHAN PUJA\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'd')
    {
      score = 640000;
      printf("And You have won 6 LAKH 40 Thousand Rupees!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('d', 'a', 'd'))
            {
              flag5050 = true;
              score = 640000;
              printf("You are correct!\n Your Current Score is %d\n \n ", score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (d)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Ninth Question for 1250000, There on your screen! \n");
  printf("9.THE TROPIC OF CANCER DOES NOT PASS THROUGH WHICH OF THESE INDIAN STATES?\nYour Options are:\na) GUJRAT?\nb) CHHATTISGARH\nc) WEST BENGAL\nd) ODISHA\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'd')
    {
      score = 1250000;
      printf("You have won 12 LAKH 40 Thousand Rupees!\n Your Current Score is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'd', 'd'))
            {
              flag5050 = true;
              score = 1250000;
              printf
                ("You are correct!\n Your Current Score is %d\n \n ",
                 score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (d)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("The next Question is of 25 Lacs  \n");
  printf("10.25 Lakhs Rupee Question In TulsidasC-s RamcharitmanasC- who says the following lines and to whom: C+Mangal bhawan, amangal Haari, Dravahu so Dasarath ajir bihariC-??\nYour Options are:\na) Kakbhushundi to Garuda?\nb) Gargi to Maitreyi\nc) Shiva to Parvati\nd) Parvati to Ganesh\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'c')
    {
      score = 2500000;
      printf("You have won 25 Lacs!\n Your Current balance is %d\n \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'a', 'c'))
            {
              flag5050 = true;
              score = 2500000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (c)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("Next Question of 50 Lacs. Play Carefully \n");
  printf("11.If Nirmala Sitharaman became the second woman to hold the defence ministry portfolio in India, who was the first?\nYour Options are:\na) UMA BHARTI?\nb) INDIRA GANDHI\nc) MAMTA BANERJEE\nd) PRATIBHA PATIL\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'b')
    {
      score = 5000000;
      printf("Correct answer\n Your Current net worth is %d\n par chaliye \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'b', 'b'))
            {
              flag5050 = true;
              score = 5000000;
              printf
                ("You are correct!\n Your Current Score is %d\n \n ",
                 score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (b)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("One more Step away from Being a Crorepati\n");
  printf("12.Which of the following actresses hails from Sri Lanka?\nYour Options are:\na) JACQUELINE FERNANDEZ?\nb) AMY JACKSON\nc) LISA HAYDON\nd) DIANA PENTY\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'a')
    {
      score = 10000000;
      printf("Yeah 1 crore!\n Your Current net worth is %d\n par chaliye \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('b', 'a', 'b'))
            {
              flag5050 = true;
              score = 10000000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (a)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("NExt Question for 2 CRORE\n");
  printf("13.Who became the Chairman of Tata sons in 2017?\nYour Options are:\na) Ratan Tata\nb) Cyrus Mistry\nc) Chandrasekaran\nd) Rajesh Gopinath\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'c')
    {
      score = 20000000;
      printf("2 CRORE! \n Your Current net worth is %d\n par chaliye \n ",score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'b', 'c'))
            {
              flag5050 = true;
              score = 20000000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (c)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf("Next Question is for 5 Crore, Play Carefully\n");
  printf("14.Which cricketer holds the Indian record for the highest score in a match in the ICC WomenC-s World Cup?\nYour Options are:\na) PUNAM RAUT\nb) MITHALI RAJ\nc) SMRITI MANDHANA\nd) HARMANPREET KAUR\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'd')
    {
      score = 50000000;
      printf("5 CRORE! Your Current net worth is%d, \n", score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('d', 'a', 'd'))
            {
              flag5050 = true;
              score = 50000000;
              printf("You are correct!\n Your Current Score is %d\n \n ",score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (d)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  printf ("LAST Question which is of 7 Crore, On your screen now\n");
  printf ("15.Which of the following is not a pair of parent and child, who have both won Nobel Prizes?\nYour Options are:\na) Marie Curie, Irene Joliot Curie\nb) Hermann Emil Fischer, Hans Fischer\nc) J J Thomson, George Paget Thomson\nd) Niels Bohr, Aage Bohr\n");
  if(flag5050 == false){
        printf("\n** YOU HAVE LIFELINE 50-50 also. Enter (e) to use it **\n Enter Your Option\n");
    }
  getchar ();
  scanf ("%c", &answer);
  if (answer == 'b')
    {
      score = 70000000;
      printf ("Well Played, 7 CRORE! Your TOTAL winning net worth is %d\n", score);
    }
  else if (answer == 'e')
    {
      if (flag5050 == false)
        {
          if (lifeline5050 ('c', 'b', 'b'))
            {
              flag5050 = true;
              score = 70000000;
              printf("You are correct!\n Your Current Score is %d\n \n", score);
            }
          else
            {
              printf ("Oops Thats a wrong answer!\n");
              printf ("Better Luck Next Time\n");
              return 0;
            }
        }
    }
  else
    {
      printf ("You are incorrect, The correct option is (b)\n");
      printf ("Better Luck Next Time\n");
      return 0;
    }
  return 0;
}


