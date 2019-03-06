<?php

//传统做法
class Dog{
	//实例化
	public function __construct(){
		echo '初始化dog'.PHP_EOL;
	}
	
	public function eat(){
	
		echo 'dog can eat'.PHP_EOL;
	}
}

class Cat{
	//实例化
	public function __construct(){
		
		echo '初始化cat'.PHP_EOL;
	}
	
	public function eat(){
		
		echo 'cat can eat'.PHP_EOL;
	}
}

$dog = new Dog();
$dog->eat();
$cat = new Cat();
$cat->eat();

//1.通过工厂类来实例化
class Factory{
	
	public static function make($args){
		switch($args){
			case 'dog':
				return new Dog();
				break;
			case 'cat':
				return new Cat();
				break;
				
		}
	}
	
}

$dog = Factory::make('dog');
$dog->eat();
$cat = Factory::make('cat');
$cat->eat();

//工厂模式
//1.定义接口
//2.接口实现
//3.通过工厂类的静态方法对各个接口进行实例化

//定义接口
interface Person{
	//
	public function eat();
	public function drink();
}

//接口实现
class Man implements Person{
	//
	public function eat(){
		echo '男人吃'.PHP_EOL;
	} 
	
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

$man = new Man();
$man->eat();
$man->drink();

$woman = new Woman();
$woman->eat();
$woman->drink();

class PersonFactory{
	//
	public static function do($args){
		switch($args){
			case 'man':
				return new Man();
				break;
			case 'woman':
				return new Woman();
				break;
		}
	}
}

$man1 = PersonFactory::do('man');
$man1->eat();
$man1->drink();

$woman1 = PersonFactory::do('woman');
$woman1->eat();
$woman1->drink();
