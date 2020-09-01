#// Author: Miles Johnson mcj5246@psu.edu
#// Collaborator: temple Tran tkt5248@psu.edu
#// Collaborator: William Kurtz wmk5158@psu.edu
#// Collaborator: Feven Molla fmm5265@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *tempstr = readline("Enter temperature in Celsius: ");
  double temp = atof(tempstr);
  double ftemp = (9.0/5.0)*(temp) + 32.0;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit\n",temp,ftemp);
  return 0;
}