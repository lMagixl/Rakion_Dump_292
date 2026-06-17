
/* public: void __thiscall CEntityMessage::WriteEntityCreate(unsigned long &,class CPlacement3D
   const &,unsigned short &) */

void __thiscall
CEntityMessage::WriteEntityCreate
          (CEntityMessage *this,ulong *param_1,CPlacement3D *param_2,ushort *param_3)

{
  CNetworkMessage *this_00;
  ulong local_10;
  Vector<float,3> *local_c;
  
                    /* 0x101310  3962
                       ?WriteEntityCreate@CEntityMessage@@QAEXAAKABVCPlacement3D@@AAG@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 1;
  *(undefined2 *)(this + 0x1c) = 0x12;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,param_2 + 4,4);
  CNetworkMessage::Write(this_00,param_2 + 8,4);
  local_c = (Vector<float,3> *)(param_2 + 0xc);
  local_10 = PackAngle(local_c);
  CNetworkMessage::Write(this_00,&local_10,4);
  CNetworkMessage::Write(this_00,param_3,2);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__CREATE__EntityID__0x_X_E_36235d44,*param_1,(uint)*param_3);
    CPrintF(s_Position___f___f___f_36235d84,(double)*(float *)param_2,
            (double)*(float *)(param_2 + 4),(double)*(float *)(param_2 + 8));
    CPrintF(s_Angle___f___f___f_36235da4,(double)*(float *)local_c,
            (double)*(float *)(param_2 + 0x10),(double)*(float *)(param_2 + 0x14));
  }
  return;
}

