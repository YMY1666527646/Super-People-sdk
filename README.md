# Super People sdk

### Offsets

    Uworld: 0x695E880
    UObjects: 0x6815E20
    Gnames: 0x67FD440
    DescNames: 0x67FCF50 (thx to #Rng Uziii & #PhysXCore) (https://www.unknowncheats.me/forum/3321945-post156.html)
    BoneMatrix: 0x3704280
    WorldToScreen: 0x37348D0
    LineOfSightTo: 0x37E7370

    LocalPlayers: 0xb8  
    GameInstance: 0x1d8 
    PersistentLevel: 0x48   
    Levels: 0x198   
    PlayerController: 0x30  
    PlayerCameraManager: 0x438  
    AcknowledgedPawn: 0x428
    PlayerState: 0x340  
    RootComponent: 0x158    
    Mesh: 0x398 
    RelativeLocation: 0x224
    PlayerName: 0x3f8
    Health: 0x10e0 
    TeamIndex: 0x598 + 0xe8


### Check Team

    auto CurUHReplicatedPlayerInfo = Read<uintptr_t>(LocalPlayerState + 0x598);
    auto currentindex = Read<char>(CurUHReplicatedPlayerInfo + 0xe8);
    
    // ...  
    
    auto UHReplicatedPlayerInfo = Read<uintptr_t>(EnemyPlayerState + 0x598);
    auto teamindex = Read<char>(UHReplicatedPlayerInfo + 0xe8);

    if (teamindex != currentindex) 
    { 
         //your code  
    };

### Actor ID
    
    BP-BattleRoyalePawn_C
    
### Bones ID

    Backpack = 120
    Backpack = 132
    Backpack_B01 = 121
    Backpack_B01 = 133
    Backpack_B02 = 122
    Backpack_B02 = 134
    Backpack_B03 = 123
    Backpack_B03 = 135
    Breast_L = 144
    Breast_L01 = 145
    Breast_L02 = 146
    Breast_R = 147
    Breast_R01 = 148
    Breast_R02 = 149
    C_Bone_01 = 191
    C_Bone_01 = 196
    C_Bone_02 = 192
    C_Bone_02 = 197
    C_Bone_03 = 193
    C_Bone_03 = 198
    C_Bone_04 = 194
    C_Bone_04 = 199
    C_Hair00 = 85
    C_Hair00 = 86
    Coat_BC_Bone_05 = 223
    Coat_BC_Bone_05 = 228
    Coat_BL_Bone_01 = 219
    Coat_BL_Bone_01 = 224
    Coat_BL_Bone_02 = 220
    Coat_BL_Bone_02 = 225
    Coat_BL_Bone_03 = 221
    Coat_BL_Bone_03 = 226
    Coat_BL_Bone_04 = 222
    Coat_BL_Bone_04 = 227
    Coat_BR_Bone_01 = 224
    Coat_BR_Bone_01 = 229
    Coat_BR_Bone_02 = 225
    Coat_BR_Bone_02 = 230
    Coat_BR_Bone_03 = 226
    Coat_BR_Bone_03 = 231
    Coat_BR_Bone_04 = 227
    Coat_BR_Bone_04 = 232
    Coat_BR_Bone_05 = 228
    Coat_BR_Bone_05 = 233
    Coat_FL_Bone_01 = 199
    Coat_FL_Bone_01 = 204
    Coat_FL_Bone_02 = 200
    Coat_FL_Bone_02 = 205
    Coat_FL_Bone_03 = 201
    Coat_FL_Bone_03 = 206
    Coat_FL_Bone_04 = 202
    Coat_FL_Bone_04 = 207
    Coat_FL_Bone_05 = 203
    Coat_FL_Bone_05 = 208
    Coat_FR_Bone_01 = 209
    Coat_FR_Bone_01 = 214
    Coat_FR_Bone_02 = 210
    Coat_FR_Bone_02 = 215
    Coat_FR_Bone_03 = 211
    Coat_FR_Bone_03 = 216
    Coat_FR_Bone_04 = 212
    Coat_FR_Bone_04 = 217
    Coat_FR_Bone_05 = 213
    Coat_FR_Bone_05 = 218
    Coat_L_Bone_01 = 204
    Coat_L_Bone_01 = 209
    Coat_L_Bone_02 = 205
    Coat_L_Bone_02 = 210
    Coat_L_Bone_03 = 206
    Coat_L_Bone_03 = 211
    Coat_L_Bone_04 = 207
    Coat_L_Bone_04 = 212
    Coat_L_Bone_05 = 208
    Coat_L_Bone_05 = 213
    Coat_R_Bone_01 = 214
    Coat_R_Bone_01 = 219
    Coat_R_Bone_02 = 215
    Coat_R_Bone_02 = 220
    Coat_R_Bone_03 = 216
    Coat_R_Bone_03 = 221
    Coat_R_Bone_04 = 217
    Coat_R_Bone_04 = 222
    Coat_R_Bone_05 = 218
    Coat_R_Bone_05 = 223
    Dummy_Bandage = 27
    Dummy_Bandage = 59
    Dummy_Book = 28
    Dummy_Book = 62
    Dummy_Drink = 26
    Dummy_Drink = 61
    Dummy_EnergyBar = 25
    Dummy_EnergyBar = 60
    Dummy_Kits = 25
    Dummy_Kits = 63
    Dummy_Painkiller = 29
    Dummy_Painkiller = 63
    Dummy_Parachute = 163
    Dummy_Parachute = 168
    Dummy_Weapon = 24
    Dummy_Weapon = 58
    Dummy_parkour = 190
    Dummy_parkour = 195
    Ghilliesuit_00_L = 167
    Ghilliesuit_00_L = 169
    Ghilliesuit_00_L01 = 168
    Ghilliesuit_00_L01 = 170
    Ghilliesuit_00_L02 = 169
    Ghilliesuit_00_L02 = 171
    Ghilliesuit_00_R = 164
    Ghilliesuit_00_R = 172
    Ghilliesuit_00_R01 = 165
    Ghilliesuit_00_R01 = 173
    Ghilliesuit_00_R02 = 166
    Ghilliesuit_00_R02 = 174
    Ghilliesuit_01_L = 157
    Ghilliesuit_01_L = 162
    Ghilliesuit_01_L01 = 158
    Ghilliesuit_01_L01 = 163
    Ghilliesuit_01_L02 = 159
    Ghilliesuit_01_L02 = 164
    Ghilliesuit_01_R = 160
    Ghilliesuit_01_R = 165
    Ghilliesuit_01_R01 = 161
    Ghilliesuit_01_R01 = 166
    Ghilliesuit_01_R02 = 162
    Ghilliesuit_01_R02 = 167
    Ghilliesuit_02_L = 154
    Ghilliesuit_02_L = 159
    Ghilliesuit_02_L01 = 155
    Ghilliesuit_02_L01 = 160
    Ghilliesuit_02_L02 = 156
    Ghilliesuit_02_L02 = 161
    Ghilliesuit_02_R = 151
    Ghilliesuit_02_R = 156
    Ghilliesuit_02_R01 = 152
    Ghilliesuit_02_R01 = 157
    Ghilliesuit_02_R02 = 153
    Ghilliesuit_02_R02 = 158
    Ghilliesuit_03_L = 148
    Ghilliesuit_03_L = 153
    Ghilliesuit_03_L01 = 149
    Ghilliesuit_03_L01 = 154
    Ghilliesuit_03_L02 = 150
    Ghilliesuit_03_L02 = 155
    Ghilliesuit_03_R = 145
    Ghilliesuit_03_R = 150
    Ghilliesuit_03_R01 = 146
    Ghilliesuit_03_R01 = 151
    Ghilliesuit_03_R02 = 147
    Ghilliesuit_03_R02 = 152
    Ghilliesuit_04_L = 93
    Ghilliesuit_04_L = 94
    Ghilliesuit_04_L01 = 94
    Ghilliesuit_04_L01 = 95
    Ghilliesuit_04_L02 = 95
    Ghilliesuit_04_L02 = 96
    Ghilliesuit_04_R = 90
    Ghilliesuit_04_R = 91
    Ghilliesuit_04_R01 = 91
    Ghilliesuit_04_R01 = 92
    Ghilliesuit_04_R02 = 92
    Ghilliesuit_04_R02 = 93
    Ghilliesuit_05_L = 31
    Ghilliesuit_05_L = 64
    Ghilliesuit_05_L01 = 32
    Ghilliesuit_05_L01 = 65
    Ghilliesuit_05_L02 = 33
    Ghilliesuit_05_L02 = 66
    Ghilliesuit_05_R = 35
    Ghilliesuit_05_R = 64
    Ghilliesuit_05_R01 = 36
    Ghilliesuit_05_R01 = 65
    Ghilliesuit_05_R02 = 37
    Ghilliesuit_05_R02 = 66
    Ghilliesuit_06_L = 28
    Ghilliesuit_06_L = 41
    Ghilliesuit_06_L01 = 29
    Ghilliesuit_06_L01 = 42
    Ghilliesuit_06_L02 = 30
    Ghilliesuit_06_L02 = 43
    Ghilliesuit_06_R = 32
    Ghilliesuit_06_R = 37
    Ghilliesuit_06_R01 = 33
    Ghilliesuit_06_R01 = 38
    Ghilliesuit_06_R02 = 34
    Ghilliesuit_06_R02 = 39
    Hair_Pony = 69
    Hair_Pony = 79
    Hair_Pony_B01 = 70
    Hair_Pony_B01 = 80
    Hair_Pony_B02 = 71
    Hair_Pony_B02 = 81
    Hair_Pony_B03 = 72
    Hair_Pony_B03 = 82
    Hair_Pony_B04 = 83
    Hair_Top = 73
    Hair_Top_B01 = 74
    HoodCap_C = 129
    HoodCap_C = 134
    HoodCap_C1 = 130
    HoodCap_C1 = 135
    HoodCap_C2 = 131
    HoodCap_C2 = 136
    HoodString_L = 119
    HoodString_L = 124
    HoodString_L1 = 120
    HoodString_L1 = 125
    HoodString_L2 = 121
    HoodString_L2 = 126
    HoodString_L3 = 122
    HoodString_L3 = 127
    HoodString_L4 = 123
    HoodString_L4 = 128
    HoodString_R = 124
    HoodString_R = 129
    HoodString_R1 = 125
    HoodString_R1 = 130
    HoodString_R2 = 126
    HoodString_R2 = 131
    HoodString_R3 = 127
    HoodString_R3 = 132
    HoodString_R4 = 128
    HoodString_R4 = 133
    Hoodcap_L = 77
    Hoodcap_L = 81
    Hoodcap_L1 = 78
    Hoodcap_L1 = 82
    Hoodcap_R = 75
    Hoodcap_R = 79
    Hoodcap_R1 = 76
    Hoodcap_R1 = 80
    LC_Hair00 = 86
    LC_Hair00 = 87
    L_Hair00 = 83
    L_Hair00 = 84
    None = 239
    None = 240
    None = 241
    None = 242
    None = 243
    None = 244
    None = 245
    None = 246
    None = 247
    None = 248
    None = 249
    RC_Hair00 = 87
    RC_Hair00 = 88
    R_Hair00 = 84
    R_Hair00 = 85
    Root = 0
    Skirt_BL_Bone02 = 195
    Skirt_BL_Bone02 = 200
    Skirt_BL_Bone03 = 196
    Skirt_BL_Bone03 = 201
    Skirt_BR_Bone02 = 197
    Skirt_BR_Bone02 = 202
    Skirt_BR_Bone03 = 198
    Skirt_BR_Bone03 = 203
    Skirt_FL_Bone02 = 176
    Skirt_FL_Bone02 = 181
    Skirt_FL_Bone03 = 177
    Skirt_FL_Bone03 = 182
    Skirt_FR_Bone02 = 186
    Skirt_FR_Bone02 = 191
    Skirt_FR_Bone03 = 187
    Skirt_FR_Bone03 = 192
    Skirt_L_Bone02 = 178
    Skirt_L_Bone02 = 183
    Skirt_L_Bone03 = 179
    Skirt_L_Bone03 = 184
    Skirt_R_Bone02 = 188
    Skirt_R_Bone02 = 193
    Skirt_R_Bone03 = 189
    Skirt_R_Bone03 = 194
    VB head = 238
    VB head = 243
    VB head = 248
    VB thigh_l_calf_l = 236
    VB thigh_l_calf_l = 241
    VB thigh_l_calf_l = 246
    VB thigh_r_calf_r = 237
    VB thigh_r_calf_r = 242
    VB thigh_r_calf_r = 247
    Weapon_Equip_Dummy = 24
    Weapon_Equip_Dummy = 62
    Weapon_Slot_Back_L_01 = 140
    Weapon_Slot_Back_L_01 = 141
    Weapon_Slot_Back_L_02 = 137
    Weapon_Slot_Back_L_02 = 139
    Weapon_Slot_Back_L_03 = 136
    Weapon_Slot_Back_L_03 = 142
    Weapon_Slot_Back_R_01 = 138
    Weapon_Slot_Back_R_02 = 137
    Weapon_Slot_Back_R_02 = 140
    Weapon_Slot_Back_R_03 = 139
    Weapon_Slot_Back_R_03 = 141
    Weapon_Slot_Back_R_04 = 142
    Weapon_Slot_Back_R_04 = 143
    Weapon_Slot_Back_R_05 = 143
    Weapon_Slot_Back_R_05 = 144
    ball_l = 174
    ball_l = 179
    ball_r = 184
    ball_r = 189
    calf_l = 171
    calf_l = 176
    calf_r = 181
    calf_r = 186
    calf_twist_01_l = 172
    calf_twist_01_l = 177
    calf_twist_01_r = 182
    calf_twist_01_r = 187
    cheek_l = 98
    cheek_l = 99
    cheek_r = 100
    cheek_r = 99
    cheekbone_l1 = 100
    cheekbone_l1 = 101
    cheekbone_r1 = 101
    cheekbone_r1 = 102
    chin = 69
    chin = 75
    clavicle_l = 38
    clavicle_l = 5
    clavicle_r = 34
    clavicle_r = 5
    eyeBrow_l1 = 110
    eyeBrow_l1 = 111
    eyeBrow_l2 = 109
    eyeBrow_l2 = 110
    eyeBrow_l3 = 108
    eyeBrow_l3 = 109
    eyeBrow_m = 107
    eyeBrow_m = 108
    eyeBrow_r1 = 111
    eyeBrow_r1 = 112
    eyeBrow_r2 = 112
    eyeBrow_r2 = 113
    eyeBrow_r3 = 113
    eyeBrow_r3 = 114
    foot_l = 173
    foot_l = 178
    foot_r = 183
    foot_r = 188
    hand_l = 46
    hand_l = 8
    hand_r = 42
    hand_r = 8
    head = 68
    head_eye_c = 240
    head_eye_c = 245
    head_eye_c_l = 114
    head_eye_c_l = 115
    head_eye_c_l3 = 105
    head_eye_c_l3 = 106
    head_eye_c_r = 115
    head_eye_c_r = 116
    head_eye_c_r3 = 106
    head_eye_c_r3 = 107
    head_eye_l = 89
    head_eye_r = 88
    head_eye_r = 90
    ik_foot_l = 230
    ik_foot_l = 235
    ik_foot_r = 231
    ik_foot_r = 236
    ik_foot_root = 229
    ik_foot_root = 234
    ik_hand_gun = 233
    ik_hand_gun = 238
    ik_hand_l = 234
    ik_hand_l = 239
    ik_hand_r = 235
    ik_hand_r = 240
    ik_hand_root = 232
    ik_hand_root = 237
    index_01_l = 47
    index_01_l = 9
    index_01_r = 43
    index_01_r = 9
    index_02_l = 10
    index_02_l = 48
    index_02_r = 10
    index_02_r = 44
    index_03_l = 11
    index_03_l = 49
    index_03_r = 11
    index_03_r = 45
    lip_down = 239
    lip_down = 244
    lip_down_c = 72
    lip_down_c = 78
    lip_down_l = 70
    lip_down_l = 76
    lip_down_r = 71
    lip_down_r = 77
    lip_l = 237
    lip_l = 242
    lip_left = 117
    lip_left = 118
    lip_r = 236
    lip_r = 241
    lip_right = 118
    lip_right = 119
    lip_up = 238
    lip_up = 243
    lip_up_c = 116
    lip_up_c = 117
    lip_up_l = 96
    lip_up_l = 97
    lip_up_r = 97
    lip_up_r = 98
    lowerarm_l = 44
    lowerarm_l = 7
    lowerarm_r = 40
    lowerarm_r = 7
    lowerarm_twist_01_l = 26
    lowerarm_twist_01_l = 45
    lowerarm_twist_01_r = 30
    lowerarm_twist_01_r = 41
    middle_01_l = 12
    middle_01_l = 50
    middle_01_r = 12
    middle_01_r = 46
    middle_02_l = 13
    middle_02_l = 51
    middle_02_r = 13
    middle_02_r = 47
    middle_03_l = 14
    middle_03_l = 52
    middle_03_r = 14
    middle_03_r = 48
    neck_01 = 67
    nose_l = 104
    nose_l = 105
    nose_m = 102
    nose_m = 103
    nose_r = 103
    nose_r = 104
    pelvis = 1
    pinky_01_l = 15
    pinky_01_l = 53
    pinky_01_r = 15
    pinky_01_r = 49
    pinky_02_l = 16
    pinky_02_l = 54
    pinky_02_r = 16
    pinky_02_r = 50
    pinky_03_l = 17
    pinky_03_l = 55
    pinky_03_r = 17
    pinky_03_r = 51
    ring_01_l = 18
    ring_01_l = 56
    ring_01_r = 18
    ring_01_r = 52
    ring_02_l = 19
    ring_02_l = 57
    ring_02_r = 19
    ring_02_r = 53
    ring_03_l = 20
    ring_03_l = 58
    ring_03_r = 20
    ring_03_r = 54
    spine_01 = 2
    spine_02 = 3
    spine_03 = 4
    thigh_l = 170
    thigh_l = 175
    thigh_r = 180
    thigh_r = 185
    thigh_twist_01_l = 175
    thigh_twist_01_l = 180
    thigh_twist_01_r = 185
    thigh_twist_01_r = 190
    thumb_01_l = 21
    thumb_01_l = 59
    thumb_01_r = 21
    thumb_01_r = 55
    thumb_02_l = 22
    thumb_02_l = 60
    thumb_02_r = 22
    thumb_02_r = 56
    thumb_03_l = 23
    thumb_03_l = 61
    thumb_03_r = 23
    thumb_03_r = 57
    upperarm_l = 39
    upperarm_l = 6
    upperarm_r = 35
    upperarm_r = 6
    upperarm_twist_01_l = 27
    upperarm_twist_01_l = 40
    upperarm_twist_01_r = 31
    upperarm_twist_01_r = 36

# PS: They use an anticheat called WonderTrust. WonderTrust + Battleye
