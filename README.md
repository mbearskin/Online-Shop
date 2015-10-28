# Online-Shop
Intro to C++ Assignment 4
Prompt:

Background: Marge is wanting to enter the modern age of computing full-force.  Since Homer created his own web page, Marge is feeling rather old fashioned.  So, she's wanting to try online shopping.  You are going to write a program to help her ease into this notion.  

Specifications:  Your program is to prompt Marge (the presumed user of the program) for the amount of money she has to spend during this session of shopping. It is then to present a listing  of items for her to shop.  Your list should look something like this:

               The Online Shop
                1.  Beer                                        $4.88
                2.  Spam                                       $1.77
                3.  DOHnuts                                   $3.29
                4.  Mustard Packets (100 count)        $2.50
                5.  Quit

So, there probably needs to be some explanations here.  First, the list is short simply because it's a lousy store and they don't have much stock (yet). Secondly, the list is horrid since the items naturally reflect those "food" items that Homer would most likely have Marge use in the preparation of his meals.  Third, "DOHnuts" is an unbelievably amazing spelling of the word for which I should be congratulated.  Fourth, mustard packets provide all the nutritional requirements for any lame-brained cartoon character like Homer, and can be used easily for a stand-alone meal for him.  Don't criticize until you try it!       Mnmmmmmm, mustard shots.

The user is to successively choose items to "add to their cart".  Each time an item is chosen, the program should prompt the user for the quantity desired.  It should deduct the required amount of money from the user's funds and present the list again.  If the user does not have the required money for the quantity of an item chosen, your program should use a loop to figure out how many of that item the user can purchase with their funds, tell them so and deduct that amount from their funds.  (E.g.  Suppose user has $20 and wants to buy 5 Beer items.  Program should report only FOUR Beer items can be purchased and then deduct $19.52 from the $20.) After each purchase, your program should report to the user how much money they have remaining.  The "Quit" option should signal your program to present the user with: 
a list of purchases (items and quantities) 
total expenditure
funds remaining.  
It should then ask them if they want to shop again.  If so, start the whole process over again.

For each input from the user (except as noted above, when entering the number of items to buy), your code is to do range checking and insist the user enter valid values.   Even though the user can enter a value too large for their purchasing power and the above specification handles it, they should be reprompted if they enter a negative value.  Likewise, if they enter an invalid amount of money as their purchasing funds, then they should be reprompted.  All such inputs should be checked.  Remember, you don't have to worry about types of inputs.

You are required to use the switch-case statement to handle the choices made from the list.  And, we repeat here and now that you are expected to use constants fully in this assignment AND we reserve the right to change "values" in this assignment posting up to 24 hrs before the due time.  Thus, you should log in and reread the assignment's specs for changes in values that you should have made constants.  I'll write them in red so it's easy to find them.  For example, the price of DOHnuts might go up to $4.29, or the second item might be Beer Nuts, or ....
Also, since you will be displaying dollar amounts, it's bad form to have $3.50 come out as $3.5. So, put this code at the top of your main after declarations and it will force exactly two decimal places to be shown always.

             cout.setf(ios::fixed); 
             cout.setf(ios::showpoint); 
             cout.precision(2); 

It's mysterious code, but we'll explain it later.
When you submit:  you should 
enter funds of $55.00
choose to buy 6 spams
choose to buy 10 beers
choose to buy 1 mustard packet (box)
quit
shop again
enter $3.00
choose 1 mustard packet (box)
quit
refuse to buy anything else
As always, be sure to ask your instructor or visit LEAD if you have any questions or need assistance.  If you get hungry during the coding of this program, you may wish to visit the online store to purchase some mustard packets.
