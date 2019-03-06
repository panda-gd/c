<?php

//观察者模式
//当对象存在一对多关系时，当一个对象的状态发生改变时，所有依赖于它的对象都得到通知并被自动更新。
//小明 => 两个女朋友（小红，小兰）

class Xiaoming{
	//
	private $obArray = [];
	//
	public function __construct(){
		
	}
	
	//绑定观察者事件
	public function bind($object){
		//
		$this->obArray[] = $object;
		
	}
	
	//观察者动作
	public function makeGirlFriend(){
		if(!empty($this->obArray)){
			foreach($this->obArray as $value){
				$value->listen();
			}
		}
	}
	
}

class Xiaohong{
	
	public function listen(){
		echo '小明新交了女朋友'.PHP_EOL;
	}
}

class Xiaolan{
	public function listen(){
		echo '小明新交了女朋友'.PHP_EOL;
	}
}

$xiaoming = new Xiaoming();
$xiaohong = new Xiaohong();
$xiaolan  = new Xiaolan();

$xiaoming->bind($xiaohong);
$xiaoming->bind($xiaolan);

$xiaoming->makeGirlFriend();

//工厂模式改造
interface Person{
	//
	public function makeFriend();
	public function listen();
}

class Xiaojun implements Person{
	//
	private $_obSerArr = [];
	
	public function bind($object){
		$this->_obSerArr[] = $object;
	}
	
	//
	public function makeFriend(){
		//
		if(!empty($this->_obSerArr)){
			foreach($this->_obSerArr as $value){
				$value->listen();
			}	
		}
	}
	
	public function listen(){
		
	}
}

class Xiaomin implements Person{
	//
	public function makeFriend(){
		
	}
	
	//
	public function listen(){
		echo '小敏知道小军交了新的女朋友！'.PHP_EOL;
	}
}

class Xiaohua implements Person{
	//
	public function makeFriend(){
		
	}
	
	//
	public function listen(){
		echo '小花知道小军交了新的女朋友！'.PHP_EOL;
	}
}

class Factory{
	//
	public static function create($args){
		switch($args){
			case 'xiaojun':
				return new Xiaojun();
				break;
			case 'xiaohua':
				return new Xiaohua();
				break;
			case 'xiaomin':
				return new Xiaomin();
				break;
		}
	}
}

//
$xiaojun = Factory::create('xiaojun');
$xiaomin = Factory::create('xiaomin');
$xiaohua = Factory::create('xiaohua');

//
$xiaojun->bind($xiaomin);
$xiaojun->bind($xiaohua);

//
$xiaojun->makeFriend();


