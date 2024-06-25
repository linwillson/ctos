 #include "./BSP/LED/led.h"

void led_init(void)
{
    GPIO_InitTypeDef gpioB5;
		GPIO_InitTypeDef gpioE5;
	
    __HAL_RCC_GPIOB_CLK_ENABLE();
		__HAL_RCC_GPIOE_CLK_ENABLE();


    gpioB5.Pin = GPIO_PIN_5;               /* ���ڷ������ź� */
    gpioB5.Mode = GPIO_MODE_OUTPUT_PP;  
    gpioB5.Speed = GPIO_SPEED_FREQ_LOW;          /* IO�ٶ�����Ϊ���� */
    HAL_GPIO_Init(GPIOB, &gpioB5);
    
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
	
		gpioE5.Pin = GPIO_PIN_5;               /* ���ڷ������ź� */
    gpioE5.Mode = GPIO_MODE_OUTPUT_PP;  
    gpioE5.Speed = GPIO_SPEED_FREQ_LOW;          /* IO�ٶ�����Ϊ���� */
    HAL_GPIO_Init(GPIOE, &gpioE5);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_SET);

}

