int main(void){

unsigned char pass[4] = {1, 2 , 3, 4};
int i = 0;
unsigned char c ;
while(1){
lcd_puts("welcome our user");
lcd_puts("      please      ");
delay_ms(500);
lcd_clear();
lcd_puts("   Enter Your   ");
lcd_puts("    Password    ");
delay_ms(500);
lcd_clear();

for(i = 0; i < 4 ; i++){
        pass[i] = keypad_getpressedkey()+'0';
        c = pass[i];
        if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == ' 9' || c == '0'){
                lcd_puts('*');
        else{
                i--;
        }
if(pass[0] == '1' && pass[1] == '2' && pass[2] == '3' && pass[3] == '4'){
                lcd_clear();
                lcd_puts(" your password ");
                lcd_puts(" is correct ");
                delay_ms(1000);
                lcd_clear();
}
else{
        lcd_clear();
        lcd_puts("Wrong password");
        delay_ms(1000);
        lcd_clear();
}

        }

}



}
}