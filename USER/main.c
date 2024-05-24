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
    delay_init();    //延时函数初始化	  
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
    uart_init(9600);        //串口初始化为9600
    LED_Init();         //初始化与LED连接的硬件接口
    KEY_Init();         //按键初始化
     
     lvgl_demo();
    
    
    while(1)
    {
    }
}

