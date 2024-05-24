#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "key.h"  
#include "24cxx.h" 
#include "myiic.h"
#include "touch.h"
#include "lvgl_demo.h"

 int main(void)
 { 
    delay_init();    //��ʱ������ʼ��	  
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
    uart_init(9600);        //���ڳ�ʼ��Ϊ9600
    LED_Init();         //��ʼ����LED���ӵ�Ӳ���ӿ�
    KEY_Init();         //������ʼ��
     
     lvgl_demo();
    
    
    while(1)
    {
    }
}

