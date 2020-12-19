#include <math.h>
//**************************************************************************************
int __BAD_PUTINS__ = 204;
int __CLI_ERROR__ = 200;
int __CODEINDEV__= 202;
//**************************************************************************************
/**
 This method can be use to get the simple intrest.
 Method By Abhinav Chauhan
 @param Principal Amount
 @param Time
 @param Rate Of Intrest
 */
double sintrest(double _PRINCIPAL, double _TIME, double _RATE)
{
	return (_PRINCIPAL * _TIME * _RATE) / 100 ;
}
//*************************************************************************
/**
 This Method Can Be Used To Find Out The Square Of Any Number
 Method By Abhinav Chauhan
 @param Number
 */
double square(double _NUM_)
{
	return _NUM_ * _NUM_ ;
}
/*************************************************************************/
/**
	This Method Can Find Out The HCF/GDC and LCM Of Any 2 Numbers
	Method By Ayush Chauhan
	@param Number1
	@param Number2
	@param Buff(For selecting between HCF and LCM)
 */
int GdcLcm(int __NUMBER1__, int __NUMBER2__, int __Buff__)
{
	int i;
	for(i=1;i<=__NUMBER1__*__NUMBER2__;i++){
		if(i%__NUMBER1__ == 0 && i%__NUMBER2__ == 0){
			if(__Buff__==1)
			{
				return i;
			}
			else if(__Buff__==2)
			{
				return (__NUMBER1__ * __NUMBER2__)/i;
			}
			else
			{
				return 4452;
			}
			break;
		}
	}
}
//***************************************************************************************
double Cintrest (double __PRINCIPAL, double __TIME, double __RATE)
{
	return __CODEINDEV__;//__PRINCIPAL*(pow((1 + __RATE / 100), __TIME));
	
}
//****************************************************************************************
/**
 *This Method returns the value of ethier third side of triangle 
 *or the hypotenuse of the triangle
 *!!This returns a double value!!
 *Method by Atharva Chauhan
 *@param condition
 *@param side1
 *@param side2
 *@param hypo
 */
double pythaG(double __condition__, double __side1__, double __side2__, double __hypo__)
{
	if(__condition__==1)
	{
		double temphypo=(__side1__*__side1__)+(__side2__*__side2__);
	     return sqrt(temphypo);
	}
	else if(__condition__==2)
	{
		double temps2=( __hypo__* __hypo__)-(__side1__*__side1__);
		return sqrt(temps2);
	}
	else
	{
		return __BAD_PUTINS__;
	}
}
