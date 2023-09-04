#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>

using namespace std;
 

void make_adjacency_list(vector<vector<float>>adjacency_list[]){
    // An element in the adjacency array is a vector in the format:  
    // { adjacent station from a station, name it - S , time taken from S to adjacent station , Line number }
                            

    // RED LINE  
    // Line No - 0

        adjacency_list[0].push_back({1,1.8,0});
        adjacency_list[1].push_back({0,1.8,0});
        adjacency_list[1].push_back({2,2,0});
        adjacency_list[2].push_back({1,2,0});
        adjacency_list[2].push_back({3,2.5,0});
        adjacency_list[3].push_back({2,2.5,0});
        adjacency_list[3].push_back({4,2.4,0});
        adjacency_list[4].push_back({3,2.4,0});
        adjacency_list[4].push_back({5,2,0});
        adjacency_list[5].push_back({4,2,0});
        adjacency_list[5].push_back({6,1.9,0});
        adjacency_list[6].push_back({5,1.9,0});
        adjacency_list[6].push_back({7,2,0});
        adjacency_list[7].push_back({6,2,0});
        adjacency_list[7].push_back({8,2.4,0});
        adjacency_list[8].push_back({7,2.4,0});
        adjacency_list[8].push_back({9,2.3,0});
        adjacency_list[9].push_back({8,2.3,0});
        adjacency_list[9].push_back({10,2,0});
        adjacency_list[10].push_back({9,2,0});
        adjacency_list[10].push_back({11,2.2,0});
        adjacency_list[11].push_back({10,2.2,0});
        adjacency_list[11].push_back({12,2,0});
        adjacency_list[12].push_back({11,2,0});
        adjacency_list[12].push_back({13,1.8,0});
        adjacency_list[13].push_back({12,1.8,0});
        adjacency_list[13].push_back({14,2.2,0});
        adjacency_list[14].push_back({13,2.2,0});
        adjacency_list[14].push_back({15,2,0});
        adjacency_list[15].push_back({14,2,0});
        adjacency_list[15].push_back({16,2,0});
        adjacency_list[16].push_back({15,2,0});
        adjacency_list[16].push_back({17,1.9,0});
        adjacency_list[17].push_back({16,1.9,0});
        adjacency_list[17].push_back({18,2,0});
        adjacency_list[18].push_back({17,2,0});
        adjacency_list[18].push_back({19,2,0});
        adjacency_list[19].push_back({18,2,0});
        adjacency_list[19].push_back({20,2,0});
        adjacency_list[20].push_back({19,2,0});
        adjacency_list[20].push_back({21,2,0});
        adjacency_list[21].push_back({20,2,0});
        adjacency_list[21].push_back({22,2,0});
        adjacency_list[22].push_back({21,2,0});
        adjacency_list[22].push_back({23,2.2,0});
        adjacency_list[23].push_back({22,2.2,0});
        adjacency_list[23].push_back({24,2,0});
        adjacency_list[24].push_back({23,2,0});
        adjacency_list[24].push_back({25,2,0});
        adjacency_list[25].push_back({24,2,0});
        adjacency_list[25].push_back({26,1.5,0});
        adjacency_list[26].push_back({25,1.5,0});
        adjacency_list[26].push_back({27,2,0});
        adjacency_list[27].push_back({26,2,0});
        adjacency_list[27].push_back({28,2.3,0});
        adjacency_list[28].push_back({27,2.3,0});

        //YELLOW LINE
        // Line No - 1

        adjacency_list[29].push_back({30,2.4,1});
        adjacency_list[30].push_back({29,2.4,1});
        adjacency_list[30].push_back({31,2,1});
        adjacency_list[31].push_back({30,2,1});
        adjacency_list[31].push_back({32,1.8,1});
        adjacency_list[32].push_back({31,1.8,1});
        adjacency_list[32].push_back({33,2.1,1});
        adjacency_list[33].push_back({32,2.1,1});
        adjacency_list[33].push_back({34,2,1});
        adjacency_list[34].push_back({33,2,1});
        adjacency_list[34].push_back({35,2,1});
        adjacency_list[35].push_back({34,2,1});
        adjacency_list[35].push_back({36,3.1,1});
        adjacency_list[36].push_back({35,3.1,1});
        adjacency_list[36].push_back({37,2,1});
        adjacency_list[37].push_back({36,2,1});
        adjacency_list[37].push_back({38,2,1});
        adjacency_list[38].push_back({37,2,1});
        adjacency_list[38].push_back({39,1.8,1});
        adjacency_list[39].push_back({38,1.8,1});
        adjacency_list[39].push_back({15,2,1});
        adjacency_list[15].push_back({39,2,1});
        adjacency_list[40].push_back({15,2,1});
        adjacency_list[15].push_back({40,2,1});
        adjacency_list[40].push_back({41,1.9,1});
        adjacency_list[41].push_back({40,1.9,1});
        adjacency_list[41].push_back({42,2,1});
        adjacency_list[42].push_back({41,2,1});
        adjacency_list[42].push_back({43,2,1});
        adjacency_list[43].push_back({42,2,1});
        adjacency_list[43].push_back({44,2,1});
        adjacency_list[44].push_back({43,2,1});
        adjacency_list[44].push_back({45,2,1});
        adjacency_list[45].push_back({44,2,1});
        adjacency_list[45].push_back({46,1.2,1});
        adjacency_list[46].push_back({45,1.2,1});
        adjacency_list[46].push_back({47,2,1});
        adjacency_list[47].push_back({46,2,1});
        adjacency_list[47].push_back({48,2,1});
        adjacency_list[48].push_back({47,2,1});
        adjacency_list[48].push_back({49,2,1});
        adjacency_list[49].push_back({48,2,1});
        adjacency_list[49].push_back({50,2,1});
        adjacency_list[50].push_back({49,2,1});
        adjacency_list[50].push_back({51,2,1});
        adjacency_list[51].push_back({50,2,1});
        adjacency_list[51].push_back({52,2,1});
        adjacency_list[52].push_back({51,2,1});
        adjacency_list[52].push_back({53,2.2,1});
        adjacency_list[53].push_back({52,2.2,1});
        adjacency_list[53].push_back({54,2,1});
        adjacency_list[54].push_back({53,2,1});
        adjacency_list[54].push_back({55,2,1});
        adjacency_list[55].push_back({54,2,1});
        adjacency_list[55].push_back({56,2.4,1});
        adjacency_list[56].push_back({55,2.4,1});
        adjacency_list[56].push_back({57,2,1});
        adjacency_list[57].push_back({56,2,1});
        adjacency_list[57].push_back({58,2,1});
        adjacency_list[58].push_back({57,2,1});
        adjacency_list[58].push_back({59,4,1});
        adjacency_list[59].push_back({58,4,1});
        adjacency_list[59].push_back({60,2,1});
        adjacency_list[60].push_back({59,2,1});
        adjacency_list[60].push_back({61,2,1});
        adjacency_list[61].push_back({60,2,1});
        adjacency_list[61].push_back({62,2,1});
        adjacency_list[62].push_back({61,2,1});
        adjacency_list[62].push_back({63,2,1});
        adjacency_list[63].push_back({62,2,1});
        adjacency_list[63].push_back({64,2.4,1});
        adjacency_list[64].push_back({63,2.4,1});


        //BLUE LINE
        // Line No - 2

        adjacency_list[65].push_back({66,2.4,2});
        adjacency_list[66].push_back({65,2.4,2});
        adjacency_list[66].push_back({67,2,2});
        adjacency_list[67].push_back({66,2,2});
        adjacency_list[67].push_back({68,2,2});
        adjacency_list[68].push_back({67,2,2});
        adjacency_list[68].push_back({69,2,2});
        adjacency_list[69].push_back({68,2,2});
        adjacency_list[69].push_back({70,1.9,2});
        adjacency_list[70].push_back({69,2.9,2});
        adjacency_list[70].push_back({71,2,2});
        adjacency_list[71].push_back({70,2,2});
        adjacency_list[71].push_back({72,2.3,2});
        adjacency_list[72].push_back({71,2.3,2});
        adjacency_list[72].push_back({73,2,2});
        adjacency_list[73].push_back({72,2,2});
        adjacency_list[73].push_back({74,2,2});
        adjacency_list[74].push_back({73,2,2});
        adjacency_list[74].push_back({75,2,2});
        adjacency_list[75].push_back({74,2,2});
        adjacency_list[75].push_back({76,2,2});
        adjacency_list[76].push_back({75,2,2});
        adjacency_list[76].push_back({77,2,2});
        adjacency_list[77].push_back({76,2,2});
        adjacency_list[77].push_back({78,2,2});
        adjacency_list[78].push_back({77,2,2});
        adjacency_list[78].push_back({79,2,2});
        adjacency_list[79].push_back({78,2,2});
        adjacency_list[79].push_back({80,2,2});
        adjacency_list[80].push_back({79,2,2});
        adjacency_list[80].push_back({81,2,2});
        adjacency_list[81].push_back({80,2,2});
        adjacency_list[81].push_back({82,1.9,2});
        adjacency_list[82].push_back({81,1.9,2});
        adjacency_list[82].push_back({83,2,2});
        adjacency_list[83].push_back({82,2,2});
        adjacency_list[83].push_back({84,2,2});
        adjacency_list[84].push_back({83,2,2});
        adjacency_list[84].push_back({85,2,2});
        adjacency_list[85].push_back({84,2,2});
        adjacency_list[85].push_back({86,2,2});
        adjacency_list[86].push_back({85,2,2});
        adjacency_list[86].push_back({87,2,2});
        adjacency_list[87].push_back({86,2,2});
        adjacency_list[87].push_back({88,2,2});
        adjacency_list[88].push_back({87,2,2});
        adjacency_list[88].push_back({89,2,2});
        adjacency_list[89].push_back({88,2,2});
        adjacency_list[89].push_back({90,2,2});
        adjacency_list[90].push_back({89,2,2});
        adjacency_list[90].push_back({91,1.9,2});
        adjacency_list[91].push_back({90,1.9,2});
        adjacency_list[91].push_back({92,2,2});
        adjacency_list[92].push_back({91,2,2});
        adjacency_list[92].push_back({43,2,2});
        adjacency_list[43].push_back({92,2,2});
        adjacency_list[93].push_back({43,2,2});
        adjacency_list[43].push_back({93,2,2});
        adjacency_list[93].push_back({94,2,2});
        adjacency_list[94].push_back({93,2,2});
        adjacency_list[94].push_back({95,2,2});
        adjacency_list[95].push_back({94,2,2});
        adjacency_list[95].push_back({96,2,2});
        adjacency_list[96].push_back({95,2,2});
        adjacency_list[96].push_back({97,3.2,2});
        adjacency_list[97].push_back({96,3.2,2});
        adjacency_list[97].push_back({114,2,2});
        adjacency_list[114].push_back({97,2,2});
        adjacency_list[114].push_back({115,2,2});
        adjacency_list[115].push_back({114,2,2});
        adjacency_list[115].push_back({116,2,2});
        adjacency_list[116].push_back({115,2,2});
        adjacency_list[116].push_back({117,2,2});
        adjacency_list[117].push_back({116,2,2});
        adjacency_list[117].push_back({118,2,2});
        adjacency_list[118].push_back({117,2,2});
        adjacency_list[118].push_back({119,2,2});
        adjacency_list[119].push_back({118,2,2});
        adjacency_list[119].push_back({120,2,2});
        adjacency_list[120].push_back({119,2,2});
        adjacency_list[97].push_back({98,2,2});
        adjacency_list[98].push_back({97,2,2});
        adjacency_list[98].push_back({99,2,2});
        adjacency_list[99].push_back({98,2,2});
        adjacency_list[99].push_back({100,2,2});
        adjacency_list[100].push_back({99,2,2});
        adjacency_list[100].push_back({101,2,2});
        adjacency_list[101].push_back({100,2,2});
        adjacency_list[101].push_back({102,2,2});
        adjacency_list[102].push_back({101,2,2});
        adjacency_list[102].push_back({103,2,2});
        adjacency_list[103].push_back({102,2,2});
        adjacency_list[103].push_back({104,2,2});
        adjacency_list[104].push_back({103,2,2});
        adjacency_list[104].push_back({105,2,2});
        adjacency_list[105].push_back({104,2,2});
        adjacency_list[105].push_back({106,2,2});
        adjacency_list[106].push_back({105,2,2});
        adjacency_list[106].push_back({107,2,2});
        adjacency_list[107].push_back({106,2,2});
        adjacency_list[107].push_back({108,2,2});
        adjacency_list[108].push_back({107,2,2});
        adjacency_list[108].push_back({109,2,2});
        adjacency_list[109].push_back({108,2,2});
        adjacency_list[109].push_back({110,2,2});
        adjacency_list[110].push_back({109,2,2});
        adjacency_list[110].push_back({111,2,2});
        adjacency_list[111].push_back({110,2,2});
        adjacency_list[111].push_back({112,2,2});
        adjacency_list[112].push_back({111,2,2});
        adjacency_list[112].push_back({113,1.9,2});
        adjacency_list[113].push_back({112,1.9,2});



        //GREEN LINE
        // Line No - 3

        adjacency_list[86].push_back({121,2.2,3});
        adjacency_list[121].push_back({86,2.2,3});
        adjacency_list[121].push_back({122,2,3});
        adjacency_list[122].push_back({121,2,3});
        adjacency_list[122].push_back({123,2,3});
        adjacency_list[122].push_back({20,2,3});
        adjacency_list[20].push_back({122,2,3});
        adjacency_list[123].push_back({122,2,3});
        adjacency_list[123].push_back({124,2.3,3});
        adjacency_list[124].push_back({123,2.3,3});
        adjacency_list[124].push_back({125,2,3});
        adjacency_list[125].push_back({124,2,3});
        adjacency_list[125].push_back({126,2,3});
        adjacency_list[126].push_back({125,2,3});
        adjacency_list[126].push_back({127,2,3});
        adjacency_list[127].push_back({126,2,3});
        adjacency_list[127].push_back({128,2.1,3});
        adjacency_list[128].push_back({127,2.1,3});
        adjacency_list[128].push_back({129,2,3});
        adjacency_list[129].push_back({128,2,3});
        adjacency_list[129].push_back({130,2,3});
        adjacency_list[130].push_back({129,2,3});
        adjacency_list[130].push_back({131,2,3});
        adjacency_list[131].push_back({130,2,3});
        adjacency_list[131].push_back({132,2,3});
        adjacency_list[132].push_back({131,2,3});
        adjacency_list[132].push_back({133,2,3});
        adjacency_list[133].push_back({132,2,3});
        adjacency_list[133].push_back({134,2.2,3});
        adjacency_list[134].push_back({133,2.2,3});
        adjacency_list[134].push_back({135,2,3});
        adjacency_list[135].push_back({134,2,3});
        adjacency_list[135].push_back({136,2,3});
        adjacency_list[136].push_back({135,2,3});
        adjacency_list[136].push_back({137,2,3});
        adjacency_list[137].push_back({136,2,3});
        adjacency_list[137].push_back({138,2,3});
        adjacency_list[138].push_back({137,2,3});
        adjacency_list[138].push_back({139,2,3});
        adjacency_list[139].push_back({138,2,3});
        adjacency_list[139].push_back({140,2,3});
        adjacency_list[140].push_back({139,2,3});
        adjacency_list[140].push_back({141,2,3});
        adjacency_list[141].push_back({140,2,3});


        //VIOLET LINE
        // Line No - 4

        adjacency_list[142].push_back({15,2.5,4});
        adjacency_list[15].push_back({142,2.5,4});
        adjacency_list[142].push_back({143,2,4});
        adjacency_list[143].push_back({142,2,4});
        adjacency_list[143].push_back({144,2.3,4});
        adjacency_list[144].push_back({143,2.3,4});
        adjacency_list[144].push_back({145,2,4});
        adjacency_list[145].push_back({144,2,4});
        adjacency_list[145].push_back({94,2,4});
        adjacency_list[94].push_back({145,2,4});
        adjacency_list[146].push_back({94,2.4,4});
        adjacency_list[94].push_back({146,2.4,4});
        adjacency_list[146].push_back({45,2,4});
        adjacency_list[45].push_back({146,2,4});
        adjacency_list[147].push_back({45,2,4});
        adjacency_list[45].push_back({147,2,4});
        adjacency_list[147].push_back({148,2.3,4});
        adjacency_list[148].push_back({147,2.3,4});
        adjacency_list[148].push_back({149,2,4});
        adjacency_list[149].push_back({148,2,4});
        adjacency_list[149].push_back({150,2,4});
        adjacency_list[150].push_back({149,2,4});
        adjacency_list[150].push_back({151,2,4});
        adjacency_list[151].push_back({150,2,4});
        adjacency_list[151].push_back({152,2,4});
        adjacency_list[152].push_back({151,2,4});
        adjacency_list[152].push_back({153,2,4});
        adjacency_list[153].push_back({152,2,4});
        adjacency_list[153].push_back({154,2,4});
        adjacency_list[154].push_back({153,2,4});
        adjacency_list[154].push_back({155,2,4});
        adjacency_list[155].push_back({154,2,4});
        adjacency_list[155].push_back({156,2,4});
        adjacency_list[156].push_back({155,2,4});
        adjacency_list[156].push_back({157,2,4});
        adjacency_list[157].push_back({156,2,4});
        adjacency_list[157].push_back({158,2,4});
        adjacency_list[158].push_back({157,2,4});
        adjacency_list[158].push_back({159,2,4});
        adjacency_list[159].push_back({158,2,4});
        adjacency_list[159].push_back({160,2,4});
        adjacency_list[160].push_back({159,2,4});
        adjacency_list[160].push_back({161,2.2,4});
        adjacency_list[161].push_back({160,2.2,4});
        adjacency_list[161].push_back({162,2,4});
        adjacency_list[162].push_back({161,2,4});
        adjacency_list[162].push_back({163,2,4});
        adjacency_list[163].push_back({162,2,4});
        adjacency_list[163].push_back({164,2,4});
        adjacency_list[164].push_back({163,2,4});
        adjacency_list[164].push_back({165,2,4});
        adjacency_list[165].push_back({164,2,4});
        adjacency_list[165].push_back({166,2,4});
        adjacency_list[166].push_back({165,2,4});
        adjacency_list[166].push_back({167,2,4});
        adjacency_list[167].push_back({166,2,4});
        adjacency_list[167].push_back({168,2,4});
        adjacency_list[168].push_back({167,2,4});
        adjacency_list[168].push_back({169,2,4});
        adjacency_list[169].push_back({168,2,4});
        adjacency_list[169].push_back({170,2,4});
        adjacency_list[170].push_back({169,2,4});
        adjacency_list[170].push_back({171,2,4});
        adjacency_list[171].push_back({170,2,4});
        adjacency_list[171].push_back({172,2.1,4});
        adjacency_list[172].push_back({171,2.1,4});


        //PINK LINE
        // Line No - 5

        adjacency_list[173].push_back({34,2,5});
        adjacency_list[34].push_back({173,2,5});
        adjacency_list[34].push_back({174,2,5});
        adjacency_list[174].push_back({34,2,5});
        adjacency_list[23].push_back({174,2,5});
        adjacency_list[174].push_back({23,2,5});
        adjacency_list[23].push_back({175,2,5});
        adjacency_list[175].push_back({23,2,5});
        adjacency_list[175].push_back({176,2,5});
        adjacency_list[176].push_back({175,2,5});
        adjacency_list[176].push_back({177,2,5});
        adjacency_list[177].push_back({176,2,5});
        adjacency_list[177].push_back({83,2,5});
        adjacency_list[83].push_back({177,2,5});
        adjacency_list[178].push_back({83,2,5});
        adjacency_list[83].push_back({178,2,5});
        adjacency_list[178].push_back({179,2,5});
        adjacency_list[179].push_back({178,2,5});
        adjacency_list[179].push_back({180,2,5});
        adjacency_list[180].push_back({179,2,5});
        adjacency_list[180].push_back({181,2,5});
        adjacency_list[181].push_back({180,2,5});
        adjacency_list[181].push_back({182,2,5});
        adjacency_list[182].push_back({181,2,5});
        adjacency_list[182].push_back({183,2,5});
        adjacency_list[183].push_back({182,2,5});
        adjacency_list[183].push_back({184,2,5});
        adjacency_list[184].push_back({183,2,5});
        adjacency_list[184].push_back({49,2,5});
        adjacency_list[49].push_back({184,2,5});
        adjacency_list[49].push_back({185,2,5});
        adjacency_list[185].push_back({49,2,5});
        adjacency_list[185].push_back({150,2,5});
        adjacency_list[150].push_back({185,2,5});
        adjacency_list[186].push_back({150,2,5});
        adjacency_list[150].push_back({186,2,5});
        adjacency_list[186].push_back({187,2,5});
        adjacency_list[187].push_back({186,2,5});
        adjacency_list[187].push_back({188,2,5});
        adjacency_list[188].push_back({187,2,5});
        adjacency_list[188].push_back({99,2,5});
        adjacency_list[99].push_back({188,2,5});
        adjacency_list[99].push_back({189,2,5});
        adjacency_list[189].push_back({99,2,5});
        adjacency_list[189].push_back({190,2,5});
        adjacency_list[190].push_back({189,2,5});
        adjacency_list[190].push_back({191,2,5});
        adjacency_list[191].push_back({190,2,5});
        adjacency_list[191].push_back({192,2,5});
        adjacency_list[192].push_back({191,2,5});
        adjacency_list[192].push_back({193,2,5});
        adjacency_list[193].push_back({192,2,5});
        adjacency_list[193].push_back({118,2,5});
        adjacency_list[118].push_back({193,2,5});
        adjacency_list[118].push_back({117,2,5});
        adjacency_list[194].push_back({117,2,5});
        adjacency_list[117].push_back({194,2,5});
        adjacency_list[117].push_back({118,2,5});
        adjacency_list[194].push_back({195,2,5});
        adjacency_list[195].push_back({194,2,5});
        adjacency_list[195].push_back({196,2,5});
        adjacency_list[196].push_back({195,2,5});
        adjacency_list[196].push_back({12,2,5});
        adjacency_list[12].push_back({196,2,5});
        adjacency_list[12].push_back({197,2,5});
        adjacency_list[197].push_back({12,2,5});
        adjacency_list[197].push_back({198,2,5});
        adjacency_list[198].push_back({197,2,5});
        adjacency_list[198].push_back({199,2,5});
        adjacency_list[199].push_back({198,2,5});
        adjacency_list[199].push_back({200,2,5});
        adjacency_list[200].push_back({199,2,5});
        adjacency_list[200].push_back({201,2.2,5});
        adjacency_list[201].push_back({200,2.2,5});


        //MAGENTA LINE
        // Line No - 6

        adjacency_list[78].push_back({202,2.2,6});
        adjacency_list[202].push_back({78,2.2,6});
        adjacency_list[202].push_back({203,2,6});
        adjacency_list[203].push_back({202,2,6});
        adjacency_list[203].push_back({204,2,6});
        adjacency_list[204].push_back({203,2,6});
        adjacency_list[204].push_back({205,2.5,6});
        adjacency_list[205].push_back({204,2.5,6});
        adjacency_list[205].push_back({206,2,6});
        adjacency_list[206].push_back({205,2,6});
        adjacency_list[206].push_back({207,2,6});
        adjacency_list[207].push_back({206,2,6});
        adjacency_list[207].push_back({208,2,6});
        adjacency_list[208].push_back({207,2,6});
        adjacency_list[208].push_back({209,2,6});
        adjacency_list[209].push_back({208,2,6});
        adjacency_list[209].push_back({210,2,6});
        adjacency_list[210].push_back({209,2,6});
        adjacency_list[210].push_back({211,2,6});
        adjacency_list[211].push_back({210,2,6});
        adjacency_list[211].push_back({52,2,6});
        adjacency_list[52].push_back({211,2,6});
        adjacency_list[52].push_back({212,2,6});
        adjacency_list[212].push_back({52,2,6});
        adjacency_list[212].push_back({213,2,6});
        adjacency_list[213].push_back({212,2,6});
        adjacency_list[213].push_back({214,2,6});
        adjacency_list[214].push_back({213,2,6});
        adjacency_list[214].push_back({215,2,6});
        adjacency_list[215].push_back({214,2,6});
        adjacency_list[215].push_back({154,2,6});
        adjacency_list[154].push_back({215,2,6});
        adjacency_list[154].push_back({216,2,6});
        adjacency_list[216].push_back({154,2,6});
        adjacency_list[216].push_back({217,2,6});
        adjacency_list[217].push_back({216,2,6});
        adjacency_list[217].push_back({218,2,6});
        adjacency_list[218].push_back({217,2,6});
        adjacency_list[218].push_back({219,2,6});
        adjacency_list[219].push_back({218,2,6});
        adjacency_list[219].push_back({220,2,6});
        adjacency_list[220].push_back({219,2,6});
        adjacency_list[220].push_back({221,2,6});
        adjacency_list[221].push_back({220,2,6});
        adjacency_list[221].push_back({222,2,6});
        adjacency_list[222].push_back({221,2,6});
        adjacency_list[222].push_back({105,2,6});
        adjacency_list[105].push_back({222,2,6});
        

        //GREY LINE
        // Line No - 7

        adjacency_list[73].push_back({223,2.5,7});
        adjacency_list[223].push_back({73,2.5,7});
        adjacency_list[223].push_back({224,2.1,7});
        adjacency_list[224].push_back({223,2.1,7});
        adjacency_list[224].push_back({225,2,7});
        adjacency_list[225].push_back({224,2,7});


        //ORANGE LINE
        // Line No - 8

        adjacency_list[42].push_back({226,3.1,8});
        adjacency_list[226].push_back({42,3.1,8});
        adjacency_list[226].push_back({227,6,8});
        adjacency_list[227].push_back({226,6,8});
        adjacency_list[227].push_back({181,0,8});
        adjacency_list[181].push_back({227,0,8});
        adjacency_list[227].push_back({228,6.4,8});
        adjacency_list[228].push_back({227,6.4,8});
        adjacency_list[228].push_back({229,4,8});
        adjacency_list[229].push_back({228,4,8});
        adjacency_list[229].push_back({65,3.5,8});
        adjacency_list[65].push_back({229,3.5,8});


        //RAPID METRO
        // Line No - 9

        adjacency_list[230].push_back({231,2.1,9});
        adjacency_list[231].push_back({230,2.1,9});
        adjacency_list[231].push_back({232,2,9});
        adjacency_list[232].push_back({231,2,9});
        adjacency_list[232].push_back({233,2,9});
        adjacency_list[233].push_back({232,2,9});
        adjacency_list[233].push_back({234,2,9});
        adjacency_list[234].push_back({233,2,9});
        adjacency_list[234].push_back({61,2,9});
        adjacency_list[61].push_back({234,2,9});
        adjacency_list[61].push_back({235,2,9});
        adjacency_list[235].push_back({61,2,9});
        adjacency_list[235].push_back({236,2,9});
        adjacency_list[236].push_back({237,2,9});
        adjacency_list[237].push_back({238,2,9});
        adjacency_list[238].push_back({239,2,9});
        adjacency_list[239].push_back({235,2,9});


        //AQUA LINE
        // Line No - 10

        adjacency_list[109].push_back({240,2.2,10});
        adjacency_list[240].push_back({109,2.2,10});
        adjacency_list[240].push_back({241,2,10});
        adjacency_list[241].push_back({240,2,10});
        adjacency_list[241].push_back({242,2.3,10});
        adjacency_list[242].push_back({241,2.3,10});
        adjacency_list[242].push_back({243,2,10});
        adjacency_list[243].push_back({242,2,10});
        adjacency_list[243].push_back({244,2,10});
        adjacency_list[244].push_back({243,2,10});
        adjacency_list[244].push_back({245,2,10});
        adjacency_list[245].push_back({244,2,10});
        adjacency_list[245].push_back({246,2,10});
        adjacency_list[246].push_back({245,2,10});
        adjacency_list[246].push_back({247,2,10});
        adjacency_list[247].push_back({246,2,10});
        adjacency_list[247].push_back({248,2,10});
        adjacency_list[248].push_back({247,2,10});
        adjacency_list[248].push_back({249,2,10});
        adjacency_list[249].push_back({248,2,10});
        adjacency_list[249].push_back({250,2,10});
        adjacency_list[250].push_back({249,2,10});
        adjacency_list[250].push_back({251,2,10});
        adjacency_list[251].push_back({250,2,10});
        adjacency_list[251].push_back({252,2,10});
        adjacency_list[252].push_back({251,2,10});
        adjacency_list[252].push_back({253,2,10});
        adjacency_list[253].push_back({252,2,10});
        adjacency_list[253].push_back({254,2,10});
        adjacency_list[254].push_back({253,2,10});
        adjacency_list[254].push_back({255,2,10});
        adjacency_list[255].push_back({254,2,10});
        adjacency_list[255].push_back({256,2,10});
        adjacency_list[256].push_back({255,2,10});
        adjacency_list[256].push_back({257,2,10});
        adjacency_list[257].push_back({256,2,10});
        adjacency_list[257].push_back({258,2,10});
        adjacency_list[258].push_back({257,2,10});
        adjacency_list[258].push_back({259,2,10});
        adjacency_list[259].push_back({258,2,10});

}

void store_interchange_time(unordered_map<int,float>&interchange_time){

        interchange_time[12] = 1.5;  //Welcome
        interchange_time[15] = 5.5;  //Kashmere Gate
        interchange_time[20] = 2;    //Inderlok
        interchange_time[23] = 1.5;  //Netaji Subash Place
        interchange_time[34] = 5;    //Azadpur
        interchange_time[42] = 1.5;  //New Delhi
        interchange_time[43] = 2.5;  //Rajiv Chowk
        interchange_time[45] = 1;    //Central Secretariat
        interchange_time[49] = 2;    //Dilli Haat - INA
        interchange_time[52] = 5;    //Hauz Khas
        interchange_time[61] = 1.5;  //Sikandarpur
        interchange_time[65] = 2;    //Dwarka Sector-21 
        interchange_time[73] = 1;    //Dwarka
        interchange_time[78] = 1;    //Janak Puri West
        interchange_time[83] = 5;    //Rajouri Garden
        interchange_time[86] = 2.5;  //Kirti Nagar 
        interchange_time[94] = 1.5;  //Mandi House 
        interchange_time[99] = 2;    //Mayur Vihar Phase-1 
        interchange_time[105] = 1.5; //Botanical Garden
        interchange_time[109] = 10;  //Noida Sector-52
        interchange_time[117] = 3;   //Karkarduma
        interchange_time[118] = 2.5; //Anand Vihar 
        interchange_time[150] = 3;   //Lajpat Nagar
        interchange_time[154] = 7.5; //Kalkaji Mandir 
        interchange_time[176] = 3.5; //Punjabi Bagh West
        interchange_time[181] = 15;  //Durgabai Deshmukh South Campus
        interchange_time[227] = 15;  //Dhaula Kuan
        interchange_time[240] = 10;  //Noida Sector 51 

      return;
}

string CAPITALIZE(string s) {

  for(int i=0;i<s.size();i++){ 
    if(s[i]>='a' && s[i]<='z')
    s[i] = s[i] - 32; 
    }

  return s;
}

static bool comparator(pair<int,vector<int>>&p1 , pair<int,vector<int>>&p2){
    if(p1.first < p2.first){
      return true;
    }
    else if(p1.first > p2.first){
      return false;
    }
    else{
      if(p1.second.size() < p2.second.size()) return true;
      else return false;
    }
}

int compute_fare(int num_stations){
  int fare;
  if(num_stations <=4){
    fare=10;
  }
  else if(num_stations>4 && num_stations<=8){
    fare=20;
  }
  else if(num_stations>8 && num_stations<=12){
    fare=30;
  }
 else if(num_stations>12 && num_stations<=21){
    fare=40;
  }
  else if(num_stations>21 && num_stations<=31){
    fare=50;
  }
  else{
    fare=60;
  }

  return fare;
}

void compute_interchanges(vector<pair<int,int>>&interchange_at_station ,  vector<int> &path ,vector<vector<float>>adjacency_list[],int prev , int index){

     for(auto adjacent : adjacency_list[path[index]]){
      int adjacent_station = adjacent[0];
      int line_no = adjacent[2];
      if(adjacent_station == path[index+1]){

        if(prev!=-1 && line_no!=prev){
          interchange_at_station.push_back({path[index],line_no});
        }
        compute_interchanges(interchange_at_station ,path ,adjacency_list,line_no ,index+1);
        
      }
     }

     return;
}

float compute_time_taken(vector<int>&path, int index , vector<vector<float>> adjacency_list[], unordered_map<int,float>& interchange_time , int num_stations , int prev_line_no){
    
    if(index==num_stations-1) return 0;

    float time=0;
    for(auto adjacent : adjacency_list[path[index]]){
        int adjnode = adjacent[0];
        float weight = adjacent[1];
        int line_no = adjacent[2];

        if(adjnode == path[index+1]){

        if(prev_line_no!=-1 && prev_line_no!=line_no){
        // time = time +  weight + interchange_time[path[index]];
        time+=weight+interchange_time[path[index]]+compute_time_taken(path, index+1 ,adjacency_list, interchange_time , num_stations , line_no);
        // time = time - (weight + interchange_time[path[index]]);
        }
        else{
        time+=weight+compute_time_taken(path, index+1 ,adjacency_list, interchange_time , num_stations , line_no);
        // time = time - weight;
        }

        }
    }
   
    return time;
}


void Path_with_minimum_interchanges(vector<pair<int,vector<int>>>&possible_paths, int node, int destination_index, vector<int>&ds , int interchanges , int prev  , vector<vector<float>> adjacency_list[] , unordered_map<int,float>&interchange_time , vector<int>&visited){
    if(node==destination_index){
      possible_paths.push_back({interchanges ,ds});
      return;
    }

    for(auto adjacent : adjacency_list[node]){
      int adjnode = adjacent[0];
      int line_no = adjacent[2];
     
      if(!visited[adjnode]){
      visited[adjnode]=1;
      ds.push_back(adjnode);
     
      if(prev!=-1 && prev!=line_no){
        Path_with_minimum_interchanges(possible_paths, adjnode, destination_index, ds ,interchanges+1 ,line_no, adjacency_list,interchange_time, visited);
      }
      else{
         Path_with_minimum_interchanges(possible_paths, adjnode, destination_index, ds ,interchanges ,line_no, adjacency_list,interchange_time, visited);
      }

      ds.pop_back();
      visited[adjnode]=0;
      
      }
      
    }

    return;
}


void Shortest_Path(int source_index, int destination_index, vector<vector<float>>adjacency_list[] , unordered_map<int,float>&interchange_time ,
 vector<int>&path , vector<float>&time_array){

     time_array[source_index]=0;
     vector<int>parent(260);
     parent[source_index] = source_index;

     //Min Heap Priority Queue
    priority_queue< pair< pair<float,int> , int > , vector<pair<pair<float,int>,int>> , greater< pair< pair<float,int>,int>> >pq;
     pq.push({{0,source_index},-1});
     

     while(pq.size()){
        float time = pq.top().first.first;
        int node = pq.top().first.second;
        int prev = pq.top().second;
        pq.pop();

        for(auto adjacent : adjacency_list[node]){
            
            int adjnode = adjacent[0];
            float weight = adjacent[1];
            int line_no = adjacent[2];

            float new_time;

            if(prev!=-1 && line_no!=prev){
                new_time = time + weight + interchange_time[node];
            }
            else{
                new_time = time + weight ;
            }
            
            if(time_array[adjnode] > new_time ){
              time_array[adjnode] = new_time;
             
              parent[adjnode] = node;

            pq.push({{new_time,adjnode},line_no});
             
            }
        }
     }
     
     int node = destination_index;
     path.push_back(node);
     while(parent[node]!=node){
      path.push_back(parent[node]);
      node = parent[node];
     }
     
     reverse(path.begin(),path.end());

    return;
}


int main(){

vector <string> Stations_List = {"Shaheed Sthal (New Bus Adda)", "Hindon River", "Arthala", "Mohan Nagar", "Shyam park", "Major Mohit Sharma", "Raj Bagh", "Shaheed Nagar",
  "Dilshad Garden", "Jhil Mil", "Mansarovar Park", "Shahdara", "Welcome", "Seelampur", "Shastri Park", "Kashmere Gate", "Tis Hazari", "Pul Bangash", "Pratap Nagar",
  "Shastri Nagar", "Inderlok", "Kanhaiya Nagar", "Keshav Puram", "Netaji Subash Place", "Kohat Enclave", "Pitampura", "Rohini East", "Rohini West", "Rithala",
  "Samaypur Badli", "Rohini Sector-18,19", "Haiderpur Badli Mor", "Jahangirpuri", "Adarsh Nagar", "Azadpur", "Model Town", "Guru Teg Bahadur Nagar", "Vishwavidyalaya",
  "Vidhan Sabha", "Civil Lines", "Chandni Chowk", "Chawri Bazar", "New Delhi", "Rajiv Chowk", "Patel Chowk", "Central Secretariat", "Udyog Bhawan", "Lok Kalyan Marg",
  "Jorbagh", "Dilli Haat - INA", "AIIMS", "Green Park", "Hauz Khas", "Malviya Nagar", "Saket", "Qutab Minar", "Chhattarpur", "Sultanpur", "Ghitorni", "Arjan Garh",
  "Guru Dronacharya", "Sikandarpur", "MG Road", "IFFCO Chowk", "Huda City Centre", "Dwarka Sector-21", "Dwarka Sector-8", "Dwarka Sector-9", "Dwarka Sector-10", 
  "Dwarka Sector-11", "Dwarka Sector-12", "Dwarka Sector-13", "Dwarka Sector-14", "Dwarka", "Dwarka Mor", "Nawada", "Uttam Nagar West", "Uttam Nagar East", 
  "Janak Puri West", "Janak Puri East", "Tilak Nagar", "Subhash Nagar", "Tagore Garden", "Rajouri Garden", "Ramesh Nagar", "Moti Nagar", "Kirti Nagar", "Shadipur", 
  "Patel Nagar", "Rajendra Place", "Karol Bagh", "Jhandewalan", "RK Ashram Marg", "Barakhamba Road", "Mandi House", "Supreme Court", "Indraprastha", "Yamuna Bank", 
  "Akshardham", "Mayur Vihar Phase-1", "Mayur Vihar Extention", "New Ashok Nagar", "Noida Sector-15", "Noida Sector-16", "Noida Sector-18", "Botanical Garden", 
  "Golf Course", "Noida City Center", "Noida Sector-34", "Noida Sector-52", "Noida Sector-61", "Noida Sector-59", "Noida Sector-62", "Noida Electronic City", 
  "Laxmi Nagar", "Nirman Vihar", "Preet Vihar", "Karkarduma", "Anand Vihar", "Kaushambi", "Vaishali", "Satguru Ram Singh Marg", "Ashok Park Main", "Punjabi Bagh", 
  "Shivaji Park", "Madipur", "Paschim Vihar East", "Paschim Vihar West", "Peeragarhi", "Udyog Nagar", "Maharaja Surajmal Stadium", "Nangloi", "Nangloi Railway Station"
  , "Rajdhani Park", "Mundka", "Mundka Industrial Area", "Ghevra Metro station", "Tikri Kalan", "Tikri Border", "Pandit Shree Ram Sharma", "Bahdurgarh City", 
  "Brigadier Hoshiar Singh", "Lal Quila", "Jama Masjid", "Delhi Gate", "ITO", "Janpath", "Khan Market", "Jawaharlal Nehru Stadium", "Jangpura", "Lajpat Nagar",
  "Moolchand", "Kailash Colony", "Nehru Place", "Kalkaji Mandir", "Govind Puri", "Okhla", "Jasola", "Sarita Vihar", "Mohan Estate", "Tughlakabad", "Badarpur Border", 
  "Sarai", "N.H.P.C. Chowk", "Mewala Maharajpur", "Sector 28 Faridabad", "Badkal Mor", "Old Faridabad", "Neelam Chowk Ajronda", "Bata Chowk", "Escorts Mujesar",
  "Sant Surdas - Sihi", "Raja Nahar Singh", "Majlis Park", "Shalimar Bagh", "Shakurpur", "Punjabi Bagh West", "ESI-Basaidarapur", "Mayapuri", "Naraina Vihar", 
  "Delhi Cantt", "Durgabai Deshmukh South Campus", "Sir M. Vishweshwaraiah Moti Bagh", "Bhikaji Cama Place", "Sarojini Nagar", "South Extension", "Vinobapuri", 
  "Ashram", "Sarai Kale Khan Nizamuddin", "Mayur Vihar Pocket-1", "Trilokpuri-Sanjay Lake", "East Vinod Nagar-Mayur Vihar -II", "Mandawali - West Vinod Nagar",
  "IP Extension", "Karkarduma Court", "Krishna Nagar", "East Azad Nagar", "Jafrabad", "Maujpur-Babarpur", "Gokulpuri", "Johri Enclave", "Shiv Vihar", 
  "Dabri Mor - Janakpuri South", "Dashrathpuri", "Palam", "Sadar Bazaar Cantonment", "Terminal-1 IGI Airport", "Shankar Vihar", "Vasant Vihar", "Munirka", 
  "R K Puram", "IIT", "Panchsheel Park", "Chirag Delhi", "Greater Kailash", "Nehru Enclave", "Okhla NSIC", "Sukhdev Vihar", "Jamia Millia Islamia", "Okhla Vihar",
  "Jasola Vihar Shaheen Bagh", "Kalindi Kunj", "Okhla Bird Sanctuary", "Nangli", "Najafgarh", "Dhansa Bus Stand", "Shivaji Stadium", "Dhaula Kuan", "Delhi Aerocity",
  "Airport (T-3)", "Sector 55-66", "Sector 54 Chowk", "Sector 53-54", "Sector 42-43", "Phase-1", "Phase-2", "Belvedere Towers", "Cyber City", "Moulsari Avenue",
  "Phase-3", "Noida Sector 51", "Noida Sector 76", "Noida Sector 101", "Noida Sector 81", "NSEZ", "Noida Sector 83", "Noida Sector 137", "Noida Sector 142",
  "Noida Sector 143", "Noida Sector 144", "Noida Sector 145", "Noida Sector 146", "Noida Sector 147", "Noida Sector 148", "Knowledge Park II", "Pari Chowk", 
  "Alpha 1", "Delta 1", "GNIDA Office", "Depot"};
  cout<<"Welcome To Delhi Metro!"<<endl;

  string source;
  cout<<"Enter the Starting Station : ";
  getline(cin , source ,'\n');
  string capitalized_source = CAPITALIZE(source);

  string destination;
  cout<<"Enter the Destination Station : ";
  getline(cin , destination ,'\n');
  string capitalized_destination = CAPITALIZE(destination);
  cout<<endl;
  
  if(capitalized_source==capitalized_destination){
    cout<<"Invalid Source or Destination Station"<<endl;
    return 0;
  }
  

  int source_index;
  int destination_index;
  
  bool valid_source=false;
  bool valid_destination=false;

  for(int index=0; index<260; index++){
    string capitalized_station = CAPITALIZE(Stations_List[index]);

    if(capitalized_station==capitalized_source){
      source_index = index;
      valid_source = true;
    }
    if(capitalized_station==capitalized_destination){
      destination_index = index;
      valid_destination=true;
    }

  }

  if(valid_source==false){
     cout<<"The Starting Station Entered is InValid"<<endl;
     return 0;
  }
  if(valid_destination==false){
    cout<<"The Destination Station Entered is InValid"<<endl;
    return 0;
  }
 

  vector<vector<float>> adjacency_list[260];
  
  make_adjacency_list(adjacency_list);

  unordered_map<int,float>interchange_time;

  store_interchange_time(interchange_time);

  
  unordered_map<int,string>line_color;

  line_color[0] = "Red Line";
  line_color[1] = "Yellow Line";
  line_color[2] = "Blue Line";
  line_color[3] = "Green Line";
  line_color[4] = "Violet Line";
  line_color[5] = "Pink Line";
  line_color[6] = "Magenta Line";
  line_color[7] = "Grey Line";
  line_color[8] = "Orange Line";
  line_color[9] = "Rapid Metro Line";
  line_color[10] ="Aqua Line";
 
 
  cout<<"Enter - 1 For Getting Shortest Path"<<endl;
  cout<<"Enter - 2 For Getting Path with Minimum Interchanges"<<endl;

  int choice;
  cin>>choice;
  cout<<endl;
  
  vector<int> path;
  int num_stations;

  //Shortest Path
  if(choice==1){
  
  vector<float>time_array(260,1e9);
  

  Shortest_Path(source_index, destination_index,  adjacency_list, interchange_time, path, time_array);
     

  num_stations = path.size();

  cout<<"The Shortest Route : "<<endl;
  for(int i=0;i<num_stations;i++){
    cout<<Stations_List[path[i]];
    if(i!=num_stations-1) cout<<" -> ";
  }

  cout<<endl<<endl;

 
      vector<pair<int,int>>interchange_at_station;
      int index = 0;
      int prev = -1;

      compute_interchanges(interchange_at_station , path ,adjacency_list, prev, index );

       for(int i=0;i<interchange_at_station.size()-1;i++){
        if((interchange_at_station[i].first==117 && interchange_at_station[i+1].first==118 ) || (interchange_at_station[i].first==118 && interchange_at_station[i+1].first==117)){
          interchange_at_station.erase(interchange_at_station.begin()+i);
          interchange_at_station.erase(interchange_at_station.begin()+i);
         break;
        }
      }
    
      if(interchange_at_station.size()>0){

      cout<<"Interchanges are :"<<endl;
      int num_interchanges = interchange_at_station.size();
        
      for(int interchange=0;interchange<num_interchanges;interchange++){
        cout<<interchange+1<<") At "<<Stations_List[interchange_at_station[interchange].first]<<" change for the "<<line_color[interchange_at_station[interchange].second]<<endl;
      }
      cout<<endl;
      }  

  // Total stoppage time is computed by the product of (Stoppage time at a station -> Which is Generalized to 15 secs i.e. 0.25 mins)
  // and (num_stations-2), this is so because stoppage time at source and destination station won't be considered.
  int total_stoppage_time = 0.25*(num_stations-2); 

  // So, Total time taken = Time taken between the stations + Interchange Time (if any) + Total Stoppage Time
  cout<<"Total Time Taken : "<< time_array[destination_index] + total_stoppage_time <<endl<<endl;

  }



  //Minimum Interchanges
  else if(choice==2){

      vector<pair<int,vector<int>>> possible_paths;
      vector<int>visited(260,0);
      vector<int>ds;
      int interchanges = 0;

      visited[source_index]=1;
      ds.push_back(source_index);
      Path_with_minimum_interchanges(possible_paths, source_index, destination_index, ds, interchanges ,-1, adjacency_list ,interchange_time, visited);
      
      sort(possible_paths.begin(),possible_paths.end() , comparator);
      
      pair<int,vector<int>> result = possible_paths[0];

      cout<<"Minimum Interchanges : "<<result.first<<endl<<endl;

      path  = result.second;
      num_stations = path.size();

      cout<<"The Route with Minimum Interchanges : "<<endl;

      for(int i=0;i<num_stations;i++){
       cout<<Stations_List[path[i]];
       if(i!=path.size()-1) cout<<" -> ";
      }
      cout<<endl<<endl;
      
      vector<pair<int,int>>interchange_at_station;
      int index = 0;
      int prev = -1;

      compute_interchanges(interchange_at_station , path ,adjacency_list, prev, index );
     
      bool flag = false;
      if(!interchange_at_station.empty()){
          for(int i=0;i<interchange_at_station.size()-1;i++){
          if((interchange_at_station[i].first==117 && interchange_at_station[i+1].first==118 ) || (interchange_at_station[i].first==118 && interchange_at_station[i+1].first==117)){
            interchange_at_station.erase(interchange_at_station.begin()+i);
            interchange_at_station.erase(interchange_at_station.begin()+i);
            flag = true;
          break;
          }
        }

      }
          
    if(!interchange_at_station.empty()){

      cout<<"Interchanges are :"<<endl;
      int num_interchanges = interchange_at_station.size();
        
      for(int interchange=0;interchange<num_interchanges;interchange++){
        cout<<interchange+1<<") At "<<Stations_List[interchange_at_station[interchange].first];
        cout<<" change for the "<<line_color[interchange_at_station[interchange].second]<<endl;
      }
      cout<<endl;
     } 
   
    
      int prev_line_no = -1;
      int Index=0;
      
      float time=compute_time_taken(path, Index ,adjacency_list, interchange_time , num_stations , prev_line_no);
      
      int total_stoppage_time = 0.25*(num_stations-2);
      
      float subtract = 0;
      if(flag){
        subtract = 3 + 2.5;
      }
      cout<<"Total Time Taken : "<< time + total_stoppage_time - subtract<<endl<<endl;
   
  }

cout<<"Total Number of Stations : "<< num_stations <<endl<<endl;

cout<<"Fare In Rupees : "<<compute_fare(num_stations);

  return 0;
}
