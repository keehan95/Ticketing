#include <stdio.h>
// 오류부분 주석 (향후 수정)
int main(void) {
	int ticketType[10];
	int ticketTime[10];
	int idNum[13];
	int i;	//i means index
	int ageYear;
	int birthDay;
	int manAge[10];
	const int THISYEAR = 2022;
	const int TODAY = 414;
	const int ALLADULT1DAY = 62000;
	const int ALLYOUTH1DAY = 54000;
	const int ALLCHILD1DAY = 47000;	
	const int ALLADULTAFTER4 = 50000;
	const int ALLYOUTHAFTER4 = 43000;
	const int ALLCHILDAFTER4 = 36000;	
	const int PARKADULT1DAY = 59000;
	const int PARKYOUTH1DAY = 52000;
	const int PARKCHILD1DAY = 46000;	
	const int PARKADULTAFTER4 = 47000;
	const int PARKYOUTHAFTER4 = 41000;
	const int PARKCHILDAFTER4 = 35000;	
	const int BABY = 15000;
	const int FREEOFCHARGE = 0;	
	int ticketPrice[10];
	int	ticketNum = 1; // fixed
	int ridesOrNot;
	int specialOffer[10];
	int sumPrice;
	int continueOrNot;
	int ticket[10];
	int index = 0;
	
	for(int index = 0; index < 10; index++) { // the max number of repition is 10 
	printf("Select Type of Tickets\n1.All\n2.Park\n");
	scanf("%d", &ticketType[i]);
	
	printf("Select Time of Tickets\n1.Day\n2.Night\n");
	scanf("%d", &ticketTime[i]);
	
	printf("Input your social security number\n"); //social security number
	for(int index = 0; index < 13; index++) {
		scanf("%1d", &idNum[index]);
	}
	
	//manAge calculation
	ageYear = idNum[0]*10 + idNum[1];
	
	if (ageYear <= 22) {
		ageYear += 2000;
	} else {
		ageYear += 1900;
	}
	
	birthDay = idNum[2]*1000+idNum[3]*100+idNum[4]*10+idNum[5];
	manAge[i] = THISYEAR - ageYear;
	if(birthDay >= TODAY) {
		manAge[i];
	} else {
		manAge[i] -= 1;
	}
	
	// price setting
	if(manAge[i] < 1) {
		ticketPrice[i] = FREEOFCHARGE;	
	} else if (manAge[i] >= 1  && manAge[i] < 3) {
		printf("baby rides? 1.yes 2.no\n");
		scanf("%d", &ridesOrNot);
		if(ridesOrNot == 1) {
			ticketPrice[i] = BABY;
		} else if(ridesOrNot == 2) {
			ticketPrice[i] = FREEOFCHARGE;
		}
	} else if (ticketType[i] == 1 && ticketTime[i] == 1 && manAge[i] >= 3 && manAge[i] < 12) {
		ticketPrice[i] = ALLCHILD1DAY;	
	} else if (ticketType[i] == 1 && ticketTime[i] == 1 && manAge[i] >= 12 && manAge[i] < 18) {
		ticketPrice[i] = ALLYOUTH1DAY;
	} else if (ticketType[i] == 1 && ticketTime[i] == 1 && manAge[i] >= 18 && manAge[i] < 65) {
		ticketPrice[i] = ALLADULT1DAY;
	} else if (ticketType[i] == 1 && ticketTime[i] == 1 && manAge[i] >= 65) {
		ticketPrice[i] = ALLCHILD1DAY;
		
	} else if (ticketType[i] == 1 && ticketTime[i] == 2 && manAge[i] >= 3 && manAge[i] < 12) {
		ticketPrice[i] = ALLCHILDAFTER4;
	} else if (ticketType[i] == 1 && ticketTime[i] == 2 && manAge[i] >= 12 && manAge[i] < 18) {
		ticketPrice[i] = ALLYOUTHAFTER4;
	} else if (ticketType[i] == 1 && ticketTime[i] == 2 && manAge[i] >= 18 && manAge[i] < 65) {
		ticketPrice[i] = ALLADULTAFTER4;
	} else if (ticketType[i] == 1 && ticketTime[i] == 2 && manAge[i] >= 65) {
		ticketPrice[i] = ALLCHILDAFTER4;
		 
	
	} else if (ticketType[i] == 2 && ticketTime[i] == 1 && manAge[i] >= 3 && manAge[i] < 12) {
		ticketPrice[i] = PARKCHILD1DAY;
	} else if (ticketType[i] == 2 && ticketTime[i] == 1 && manAge[i] >= 12 && manAge[i] < 18) {
		ticketPrice[i] = PARKYOUTH1DAY;
	} else if (ticketType[i] == 2 && ticketTime[i] == 1 && manAge[i] >= 18 && manAge[i] < 65) {
		ticketPrice[i] = PARKADULT1DAY;
	} else if (ticketType[i] == 2 && ticketTime[i] == 1 && manAge[i] >= 65) {
		ticketPrice[i] = PARKCHILD1DAY;
		

	} else if (ticketType[i] == 2 && ticketTime[i] == 2 && manAge[i] >= 3 && manAge[i] < 12) {
		ticketPrice[i] = PARKCHILDAFTER4;
	} else if (ticketType[i] == 2 && ticketTime[i] == 2 && manAge[i] >= 12 && manAge[i] < 18) {
		ticketPrice[i] = PARKYOUTHAFTER4;
	} else if (ticketType[i] == 2 && ticketTime[i] == 2 && manAge[i] >= 18 && manAge[i] < 65) {
		ticketPrice[i] = PARKADULTAFTER4;
	} else if (ticketType[i] == 2 && ticketTime[i] == 2 && manAge[i] >= 65) {
		ticketPrice[i] = PARKCHILDAFTER4;
	}
	
	//the number of Tickets(fixed)
	printf("How many tickets? (max 10)\n");
	printf("1\n");
	
	//Special Offer
	printf("Special Offer\n1.None\n2.Veteran\n3.Military\n4.Pregnant\n5.Multiple\n");
	scanf("%d", &specialOffer[i]);
	
	if(manAge[i] >= 65) {
		specialOffer[i] = 1;
	}
	if(specialOffer[i] == 1) {
		ticketPrice[i];
	} else if(specialOffer[i] == 2) {
		specialOffer[i] = 2;
		ticketPrice[i]*=0.5; 
	} else if (specialOffer[i] == 3) {
		specialOffer[i] = 3;
		ticketPrice[i]*=0.5; 
	} else if (ticketType[i] == 1 && specialOffer[i] == 4) {
		specialOffer[i] = 4;
		ticketPrice[i]*=0.49; 
	} else if (ticketType[i] == 1 && specialOffer[i] == 5) {
		specialOffer[i] = 5;
		ticketPrice[i]*=0.5; 
	} else if (ticketType[i] == 1 && specialOffer[i] == 6) {
		specialOffer[i] = 6;
		ticketPrice[i]*=0.3;
	}
	
	sumPrice += ticketPrice[i]*ticketNum;
	printf("%d\n", ticketPrice[i]*ticketNum);
	printf("%d\n", sumPrice);
	
	i++;
	
	printf("Continue to buy or not?\n1.More tickets\n2.Terminate\n");
	scanf("%d", &continueOrNot);
	if(continueOrNot == 1) {
		continue;
	} else if(continueOrNot == 2) {
		break;
	}
	
	printf("\n\n");
	} // for statement ends. 
	printf("Thank you\n");
	printf("===================== LOTTE WORLD =====================\n");
	
	for(index; index < i; index++) {
		if(ticketType[index] == 1) {
			printf("%s""All   ");
		} else if (ticketType[index] == 2) {
			printf("Park  ");
		}
		if(ticketTime[index] == 1) {
			printf("Day    ");
		} else if (ticketTime[index] == 2) {
			printf("Night  ");
		}
		printf("X    %d     ", ticketNum);
		printf("%d won\t", ticketPrice[index]);
		printf("\n");
		
//		Error; needs to be fixed

//		if(specialOffer[index] == 1) {
//			printf("No special offer     ");
//		} else if(specialOffer[index] == 2) {
//			printf("disabled             ");
//		} else if (specialOffer[index] == 3) {
//			printf("veteran              ");
//		} else if (ticketType[index] == 1 && specialOffer[index] == 4) {
//			printf("military             ");
//		} else if (ticketType[index] == 1 && specialOffer[index] == 5) {
//			printf("pregnan              ");
//		} else if (ticketType[index] == 1 && specialOffer[index] == 6) {
//			printf("multiple             ");
//		}
	}
	printf("The total price is %d \n",sumPrice);
	printf("====================================================\n");
}
