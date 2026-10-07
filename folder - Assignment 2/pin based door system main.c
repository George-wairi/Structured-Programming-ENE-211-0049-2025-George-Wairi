#include <stdio.h>
#include <stdlib.h>
int main() {
int pin, choice, attempts = 0, granted = 0;
const int CORRECT_PIN = 1234;
while (attempts < 3) {
printf("Enter your 4-digit PIN: ");
scanf("%d", &pin);
if (pin < 1000) {
printf("PIN is too short (must be 4 digits)\n");
} else if (pin > 9999) {
printf("PIN is too long (must be 4 digits)\n");
} else if (pin == CORRECT_PIN) {
granted = 1;
break; // correct PIN: leave the attempts loop
} else {
printf("Incorrect PIN.\n");
}
attempts++;
printf("Attempts remaining: %d\n", 3 - attempts);
}
if (granted) {
printf("Access Granted. Door Unlocked.\n");
do {
printf("\n=== Device Menu ===\n");
printf("1. Open Door\n");
printf("2. Change Username\n");
printf("3. Change PIN\n");
printf("4. Exit\n");
printf("Choose an option: ");
scanf("%d", &choice);
switch (choice) {
case 1: printf("Door is already open.\n"); break;
case 2: printf("Change username feature coming soon.\n"); break;
case 3: printf("Change PIN feature coming soon.\n"); break;
case 4: printf("Exiting system.\n"); break;
default: printf("Invalid option! Please try again.\n");
}
} while (choice != 4);
} else {
printf("Too many attempts! System Locked.\n");
printf("System locked! Wait for 5 seconds...\n");
for (int i = 5; i >= 1; i--) {
printf("%d... ", i);
}
printf("\nYou can try again now.\n");
}


return 0;
}
