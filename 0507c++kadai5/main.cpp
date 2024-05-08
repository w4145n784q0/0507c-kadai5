#include <iostream>
#include "Data.h"
//メイン関数
int main() {
	//変数ⅰに適当な値を代入させる
	int i;
	std::cin >> i;
	//Data クラスのインスタンスを作る
	Data x;
	//メンバ関数を呼び出す
	x.SetValue(i); //変数ⅰの値を渡す（アクセス関数）
	x.Disp(); //表示する
}

//アクセス関数の必要性
//Data.cppにはメンバ変数valueの値を代入する処理がないのでアクセス関数を使わずにx.Dispを呼び出すと適当な値が入ってしまう
//関数SetValueに値を渡すことでx.Dispで正しく表示できる