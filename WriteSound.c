
/* public: void __thiscall CEntityMessage::WriteSound(unsigned long &,unsigned char,void *,long &)
    */

void __thiscall
CEntityMessage::WriteSound
          (CEntityMessage *this,ulong *param_1,uchar param_2,void *param_3,long *param_4)

{
  CNetworkMessage *this_00;
  long *plVar1;
  
                    /* 0x101f90  3991  ?WriteSound@CEntityMessage@@QAEXAAKEPAXAAJ@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  plVar1 = param_4;
  *(undefined4 *)this = 0xf;
  *(ulong *)(this + 0x20) = *param_1;
  *(short *)(this + 0x1c) = (short)*param_4 + 1;
  CNetworkMessage::Write(this_00,&param_2,1);
  CNetworkMessage::Write(this_00,param_3,*plVar1);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__Sound__EntityID__0x_X_Co_362360e4,*param_1,(uint)param_2);
  }
  return;
}

