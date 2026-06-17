
/* public: void __thiscall CEntityMessage::WriteEntityCopy(unsigned long &,unsigned long &,class
   CPlacement3D const &,unsigned char) */

void __thiscall
CEntityMessage::WriteEntityCopy
          (CEntityMessage *this,ulong *param_1,ulong *param_2,CPlacement3D *param_3,uchar param_4)

{
  CNetworkMessage *this_00;
  ulong local_10;
  Vector<float,3> *local_c;
  
                    /* 0x101490  3961  ?WriteEntityCopy@CEntityMessage@@QAEXAAK0ABVCPlacement3D@@E@Z
                        */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 2;
  *(undefined2 *)(this + 0x1c) = 0x14;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,param_3,4);
  CNetworkMessage::Write(this_00,param_3 + 4,4);
  CNetworkMessage::Write(this_00,param_3 + 8,4);
  local_c = (Vector<float,3> *)(param_3 + 0xc);
  local_10 = PackAngle(local_c);
  CNetworkMessage::Write(this_00,&local_10,4);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__COPY__SourceEntityID__0x_36235db8,*(undefined4 *)(this + 0x20),*param_2);
    CPrintF(s_Position___f___f___f_36235e04,(double)*(float *)param_3,
            (double)*(float *)(param_3 + 4),(double)*(float *)(param_3 + 8));
    CPrintF(s_Angle___f___f___f_36235e24,(double)*(float *)local_c,
            (double)*(float *)(param_3 + 0x10),(double)*(float *)(param_3 + 0x14));
  }
  return;
}

