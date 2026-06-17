
/* public: void __thiscall CEntityMessage::WriteSka(unsigned long &,unsigned char,void *,long &) */

void __thiscall
CEntityMessage::WriteSka
          (CEntityMessage *this,ulong *param_1,uchar param_2,void *param_3,long *param_4)

{
  CNetworkMessage *this_00;
  long *plVar1;
  
                    /* 0x101b90  3990  ?WriteSka@CEntityMessage@@QAEXAAKEPAXAAJ@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  plVar1 = param_4;
  *(undefined4 *)this = 0xb;
  *(ulong *)(this + 0x20) = *param_1;
  *(short *)(this + 0x1c) = (short)*param_4 + 1;
  CNetworkMessage::Write(this_00,&param_2,1);
  CNetworkMessage::Write(this_00,param_3,*plVar1);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__Ska_Anim__EntityID__0x_X_36236010,*param_1,(uint)param_2);
  }
  return;
}

