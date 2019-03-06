<?php

//策略模式
//为了解决接口不兼容的不同类，可以一起工作,从而实现类的复用
//如果不是很有必要，可以不使用适配器.大量使用适配器会使系统变的复杂和紊乱
//适配器不是在详细设计时添加的，而是解决正在服役的项目的问题。

interface Bird{
	//
	public function eat();
	//
	public function fly();
	
}


interface People{
	//
	public function eat();
	//
	public function run();
	
}

class Parrot implements Bird{
	//
	public function eat(){
		echo '鹦鹉会吃'.PHP_EOL;
	}
	//
	public function fly(){
		echo '鹦鹉会飞'.PHP_EOL;
	}
	
}

//如何实现，让人也可以调用鹦鹉里面的方法
class Person implements People{
	//
	private $_personAdapter;
	
	//
	public function __construct(Parrot $parrot){
		$this->_personAdapter  = $parrot;
	}
	
	public function fly(){
		$this->_personAdapter->fly();
	}
	
	//
	public function eat(){
		echo '人会吃'.PHP_EOL;
	}
	//
	public function run(){
		echo '人会走'.PHP_EOL;
	}
	
}

$parrot = new Parrot();

$Person = new Person($parrot);

$Person->eat();
$Person->fly();
$Person->run();








