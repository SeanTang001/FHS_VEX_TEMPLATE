#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1){
		if(vexRT[Btn7L] == 1){
			motor[left] = 15;
		}else{
			motor[left] = 0;
		}
	}
}
