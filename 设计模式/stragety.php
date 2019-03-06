<?php

//策略模式 
//针对不同的问题类型，执行相应的策略
//针对优惠打折有金额扣减和百分比扣减两种方式
//满100减20元 或者 打七折

abstract class DiscountActivity{
	//
	public abstract function discount($money);
}

//
class NumDiscount extends DiscountActivity{
	
	public function discount($money){
		return $money - 10;
	}
}

//
class PercentDiscount extends DiscountActivity{
	
	public function discount($money){
		return (float)($money * 0.75);
	}
	
}

class DiscountStragety{
	//
	private $_discount;
	
	//
	public function __construct($object){
		//
		$this->_discount = $object;
	}
	
	//
	public function discount($money){
		return $this->_discount->discount($money);
	}
}


$numDiscount = new NumDiscount();

$discount = new DiscountStragety($numDiscount);
$money    = $discount->discount(100);

echo '满减后的价格为：'.$money.PHP_EOL;


$personDiscount = new PercentDiscount();

$discount = new DiscountStragety($personDiscount);
$money    = $discount->discount(100);
echo '打折后的价格为：'.$money.PHP_EOL;




















