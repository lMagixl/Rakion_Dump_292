
/* public: void __thiscall CEntityMessage::ReadBasePosition(class Vector<float,3> &) */

void __thiscall CEntityMessage::ReadBasePosition(CEntityMessage *this,Vector<float,3> *param_1)

{
  CNetworkMessage *this_00;
  
                    /* 0x1020e0  2949  ?ReadBasePosition@CEntityMessage@@QAEXAAV?$Vector@M$02@@@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  CNetworkMessage::Read(this_00,param_1,4);
  CNetworkMessage::Read(this_00,param_1 + 4,4);
  CNetworkMessage::Read(this_00,param_1 + 8,4);
  return;
}

