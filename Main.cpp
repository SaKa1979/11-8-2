//#include "implementation.cpp"
////#include "interface.hpp"
//
////error handling
//void errMsg(int code){
//	switch(code){
//	case okS: cout<<"oke"<<endl;
//	break;
//	case vol: cout<<"de array is vol"<<endl;
//	break;
//	case niet_aanwezig: cout<<"persoon is niet aanwezig"<<endl;
//	break;
//	case leeg: cout<<"niets te zien"<<endl;
//	break;
//	default: cout<<"error niet geimplementeerd"<<endl;
//	}
//}
//
//
//int main(void){
//
//leden p; //object p van class leden
//int keuze;
//char input_zoek_lid[NAAM_LEN];
//sig err;
//
//	do{
//		cout<<endl;
//		cout<<"menu: ;"<<endl;
//		cout<<"0: einde "<<endl;
//		cout<<"1: voeg lid toe"<<endl;
//		cout<<"2: show alle leden "<<endl;
//		cout<<"3: show leden aantal "<<endl;
//		cout<<"4: zoek een lid: "<<endl;
//		cout<<"kies :"; cin>>keuze;
//		cout<<endl;
//
//		switch(keuze){
//		case 0: cout<<"end"<<endl;break;
//			break;
//		case 1: if ((err=p.voegtoe_leden())!=okS)errMsg(err);//err krijgt de waarde van p.voegtoe_leden. Is deze ongelijk aan okS dan wordt de waarde doorgegeven aan errMsg
//		break;
//		case 2: if ((err=p.get_leden())!=okS)errMsg(err);
//		break;
//		case 3: cout<<"het huidige aantal leden is "<<p.show_leden_aantal()<<endl;
//		break;
//		case 4: cout<<"geeft de naam op :"; cin>>input_zoek_lid;
//				if ((err=p.zoek_lid(input_zoek_lid))!=okS)errMsg(err);
//		break;
//		default: cout<<"onjuiste keuze "<<endl;;
//		}//switch
//	}
//	while(keuze);
//	return 0;
//}
