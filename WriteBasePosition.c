
/* public: void __thiscall CEntityMessage::WriteBasePosition(class Vector<float,3> &) */

void __thiscall CEntityMessage::WriteBasePosition(CEntityMessage *this,Vector<float,3> *param_1)

{
  CNetworkMessage *this_00;
  
                    /* 0x102060  3955  ?WriteBasePosition@CEntityMessage@@QAEXAAV?$Vector@M$02@@@Z
                        */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 0x10;
  *(undefined2 *)(this + 0x1c) = 0xc;
  *(undefined4 *)(this + 0x20) = 0;
  CNetworkMessage::Write(this_00,param_1,4);
  CNetworkMessage::Write(this_00,param_1 + 4,4);
  CNetworkMessage::Write(this_00,param_1 + 8,4);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__BASEPLACEMENT__Position__3623611c,(double)*(float *)param_1,
            (double)*(float *)(param_1 + 4),(double)*(float *)(param_1 + 8));
  }
  return;
}

