<?php

//工厂方法 工厂类不再负责类的创建，而是通过定义工厂接口，设置每个类对应的工厂

interface Person{
	//
	public function eat();
	//
	public function drink();
	
}

class Man implements Person{
	//
	public function eat(){
		echo '男人吃'.PHP_EOL;
	}
	//
	public function drink(){
		echo '男人喝'.PHP_EOL;
	}
	
}

class Woman implements Person{
	//
	public function eat(){
		echo '女人吃'.PHP_EOL;
	}
	//
	public function drink(){
		echo '女人喝'.PHP_EOL;
	}
	
}

interface Factory{
	//
	public static function do();
}

class ManFactory implements Factory{
	//
	public static function do(){
		return new Man();
	}
}

class WomanFactory implements Factory{
	public static function do(){
		return new Woman();
	}
}

//
$man = ManFactory::do();
$man->eat();

//
$woman = WomanFactory::do();
$woman->drink();
