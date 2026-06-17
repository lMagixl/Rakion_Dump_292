
/* public: void __thiscall CEntityMessage::WriteStartAnim(unsigned long &,long &,unsigned long &) */

void __thiscall
CEntityMessage::WriteStartAnim(CEntityMessage *this,ulong *param_1,long *param_2,ulong *param_3)

{
  CNetworkMessage *this_00;
  
                    /* 0x101a30  3992  ?WriteStartAnim@CEntityMessage@@QAEXAAKAAJ0@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 8;
  *(undefined2 *)(this + 0x1c) = 8;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,param_3,4);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__STARTANIM__EntityID__0x__36235f38,*param_1,*param_2,*param_3);
  }
  return;
}

