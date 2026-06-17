
/* public: void __thiscall CLightSource::GetLightColorAndAmbient(unsigned char &,unsigned char
   &,unsigned char &,unsigned char &,unsigned char &,unsigned char &)const  */

void __thiscall
CLightSource::GetLightColorAndAmbient
          (CLightSource *this,uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,
          uchar *param_5,uchar *param_6)

{
                    /* 0xc7e50  1947  ?GetLightColorAndAmbient@CLightSource@@QBEXAAE00000@Z */
  GetLightColor(this,param_1,param_2,param_3);
  GetLightAmbient(this,param_4,param_5,param_6);
  return;
}

