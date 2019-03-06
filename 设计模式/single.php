<?php

//传统模式
class Dog{
	public function __construct(){
		
	}
}

$dog1 = new Dog();
$dog2 = new Dog();

if($dog1 === $dog2){
	echo 'dog1和dog2是同一个对象'.PHP_EOL;
}else{
	echo 'dog1和dog2不是同一个对象'.PHP_EOL;
}

//单例模式
//1.私有的初始化方法
//2.私有静态属性
//3.公共静态方法
class Single{
	
	private static $_instance;  //唯一的静态实例
	
	private function __construct(){  //初始化私有，防止外部创建
		
	}
	
	//实现单例的方式
	public static function getInstance(){
		if(null == self::$_instance){
			self::$_instance = new self();
		}
		return self::$_instance;
	}
}

$person1 = Single::getInstance();
$person2 = Single::getInstance();

if($person1 === $person2){
	echo 'person1和person2是同一个对象'.PHP_EOL;
}else{
	echo 'person1和person2不是同一个对象'.PHP_EOL;
}


