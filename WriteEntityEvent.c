
/* public: void __thiscall CEntityMessage::WriteEntityEvent(unsigned long &,long &,void *,long &) */

void __thiscall
CEntityMessage::WriteEntityEvent
          (CEntityMessage *this,ulong *param_1,long *param_2,void *param_3,long *param_4)

{
  CNetworkMessage *this_00;
  
                    /* 0x101600  3964  ?WriteEntityEvent@CEntityMessage@@QAEXAAKAAJPAX1@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 5;
  *(short *)(this + 0x1c) = (short)*param_4 + 4;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,param_3,*param_4);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__EVENT__EntityID__0x_X_Ev_36235e60,*param_1,*param_2,*param_4);
  }
  return;
}

