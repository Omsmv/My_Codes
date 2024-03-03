BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "StateCovidDetails" (
	"ID"	TEXT,
	"District_Name"	TEXT,
	"Confirmed_Case"	INTEGER,
	"Active_Case"	INTEGER,
	"Recovered_Case"	INTEGER,
	"Deceased"	INTEGER
);
INSERT INTO "StateCovidDetails" VALUES ('MH_Ahmednagar','Ahmednagar',95323,9858,84244,1221);
INSERT INTO "StateCovidDetails" VALUES ('MH_Akola','Akola',28822,4058,24297,467);
INSERT INTO "StateCovidDetails" VALUES ('MH_Amravati','Amravati',49379,2985,45744,650);
INSERT INTO "StateCovidDetails" VALUES ('BR_Aurangabad','Aurangabad',85371,13496,70498,1377);
INSERT INTO "StateCovidDetails" VALUES ('MH_Beed','Beed',26379,4305,21453,621);
INSERT INTO "StateCovidDetails" VALUES ('MH_Bhandara','Bhandara',18625,3114,15190,321);
INSERT INTO "StateCovidDetails" VALUES ('MH_Buldhana','Buldhana',28133,4138,23710,285);
INSERT INTO "StateCovidDetails" VALUES ('MH_Chandrapur','Chandrapur',29542,2414,26683,445);
INSERT INTO "StateCovidDetails" VALUES ('MH_Dhule','Dhule',26474,5456,20653,365);
INSERT INTO "StateCovidDetails" VALUES ('MH_Gadchiroli','Gadchiroli',10137,439,9588,110);
INSERT INTO "StateCovidDetails" VALUES ('MH_Gondia','Gondia',16189,932,15075,182);
INSERT INTO "StateCovidDetails" VALUES ('MH_Hingoli','Hingoli',7110,1867,5140,103);
INSERT INTO "StateCovidDetails" VALUES ('MH_Jalgaon','Jalgaon',86508,6994,77915,1599);
INSERT INTO "StateCovidDetails" VALUES ('MH_Jalna','Jalna',23322,774,22137,411);
INSERT INTO "StateCovidDetails" VALUES ('MH_Kolhapur','Kolhapur',51397,761,48939,1697);
INSERT INTO "StateCovidDetails" VALUES ('MH_Latur','Latur',33904,5935,27217,752);
INSERT INTO "StateCovidDetails" VALUES ('MH_Mumbai','Mumbai',423419,55767,355944,11708);
INSERT INTO "StateCovidDetails" VALUES ('MH_Nagpur','Nagpur',233883,48851,181113,3919);
INSERT INTO "StateCovidDetails" VALUES ('MH_Nanded','Nanded',44567,10012,33768,787);
INSERT INTO "StateCovidDetails" VALUES ('MH_Nandurbar','Nandurbar',18498,4764,13433,301);
INSERT INTO "StateCovidDetails" VALUES ('MH_Nashik','Nashik',182095,36293,143561,2241);
INSERT INTO "StateCovidDetails" VALUES ('MH_Osmanabad','Osmanabad',21682,2536,18555,591);
INSERT INTO "StateCovidDetails" VALUES ('AP_Other State','Other State',146,50,0,96);
INSERT INTO "StateCovidDetails" VALUES ('MH_Palghar','Palghar',54650,3581,50094,975);
INSERT INTO "StateCovidDetails" VALUES ('MH_Parbhani','Parbhani',14601,4955,9288,358);
INSERT INTO "StateCovidDetails" VALUES ('MH_Pune','Pune',544287,64648,471296,8343);
INSERT INTO "StateCovidDetails" VALUES ('MH_Raigad','Raigad',81407,4672,75077,1658);
INSERT INTO "StateCovidDetails" VALUES ('MH_Ratnagiri','Ratnagiri',13185,635,12120,430);
INSERT INTO "StateCovidDetails" VALUES ('MH_Sangli','Sangli',54807,2069,50913,1825);
INSERT INTO "StateCovidDetails" VALUES ('MH_Satara','Satara',66015,3770,60361,1884);
INSERT INTO "StateCovidDetails" VALUES ('MH_Sindhudurg','Sindhudurg',7362,522,6653,187);
INSERT INTO "StateCovidDetails" VALUES ('MH_Solapur','Solapur',67785,6036,59835,1914);
INSERT INTO "StateCovidDetails" VALUES ('MH_Thane','Thane',344385,42182,296223,5980);
INSERT INTO "StateCovidDetails" VALUES ('MH_Wardha','Wardha',21580,1941,19261,378);
INSERT INTO "StateCovidDetails" VALUES ('MH_Washim','Washim',16507,3078,13240,189);
INSERT INTO "StateCovidDetails" VALUES ('MH_Yavatmal','Yavatmal',28687,4009,24150,528);
COMMIT;
