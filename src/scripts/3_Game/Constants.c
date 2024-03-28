const string Syberia_ModPreffix = "[SYBERIA] ";
const bool Syberia_DebugMode = false;
const string Syberia_Version = "OPEN BETA 0.50D";

class SyberiaVersionChecker
{
	void CLIENT_AND_SERVER_MODS_VERSION_MISSMATCH_0_50D() {}
}

void SybLog(string message)
{
	if (Syberia_DebugMode) Print(Syberia_ModPreffix + message);
}

bool ConfigIsInstanceOf(string basePath, string classname, string baseClassname)
{
	if (!GetGame().ConfigIsExisting(basePath + " " + classname))
	{
		return false;
	}
	
	string baseOutputName;
	while (GetGame().ConfigGetBaseName(basePath + " " + classname, baseOutputName))
	{
		if (baseOutputName == baseClassname)
		{
			return true;
		}
		
		classname = baseOutputName;
	}
	
	return false;
}

enum SyberiaERPC
{
	SYBERPC_FIRST = -246400,
	SYBERPC_SYNCH_TRADER_POINT_CLIENT,
	SYBERPC_SYNCH_TRADER_POINT_SERVER,
	SYBERPC_SYNCH_PLAYER_SYBSTATS_REQUEST,
	SYBERPC_SYNCH_PLAYER_SYBSTATS_RESPONSE
};

enum SyberiaRPC
{
	SYBRPC_RESPAWN_SCREEN_OPEN,
	SYBRPC_NEWCHAR_SCREEN_OPEN,
	SYBRPC_EQUIP_SCREEN_OPEN,
	SYBRPC_CREATENEWCHAR_REQUEST,
	SYBRPC_STARTGAME_REQUEST,
	SYBRPC_RESPAWN_REQUEST,
	SYBRPC_DELETECHAR_REQUEST,
	SYBRPC_CREATENEWCHAR_ERROR,
	SYBRPC_PDA_USER_STATE,
	SYBRPC_PDA_ADD_CONTACT,
	SYBRPC_PDA_CHECK_CONTACT,
	SYBRPC_PDA_SEND_MESSAGE,
	SYBRPC_PDA_SEND_GLOBAL_MESSAGE,
	SYBRPC_PDA_SEND_GROUP_MESSAGE,
	SYBRPC_PDA_CMD_GROUP,
	SYBRPC_SCREEN_MESSAGE,
	SYBRPC_CLIENT_OPTIONS,
	SYBRPC_ADMINTOOL_OPEN,
	SYBRPC_ADMINTOOL_PLAYERINFO,
	SYBRPC_ADMINTOOL_PLAYERUPDATE,
	SYBRPC_ADMINTOOL_SPAWNITEM,
	SYBRPC_ADMINTOOL_CLEARITEMS,
	SYBRPC_ADMINTOOL_UPDATEMAP,
	SYBRPC_ADMINTOOL_TELEPORT,
	SYBRPC_ADMINTOOL_FREECAM,
	SYBRPC_ADMINTOOL_ESPSYNCH,
	SYBRPC_ADMINTOOL_OBJMOVE,
	SYBRPC_ADMINTOOL_OBJDEL,	
	SYBRPC_ADMINTOOL_DELETE_CHARACTER,
	SYBRPC_ADMINTOOL_KICK,
	SYBRPC_ADMINTOOL_TELEPORT_TO_PLAYER,
	SYBRPC_ADMINTOOL_TELEPORT_PLAYER_TO_ME,	
	SYBRPC_ADMINTOOL_MESSAGE,
	SYBRPC_SKILLS_UPDATE,
	SYBRPC_SKILLS_ACTIVATE,
	SYBRPC_STETHOSCOPE_INSPECT,
	SYBRPC_CURRENT_ZONE_SYNC,
	SYBRPC_OPEN_TRADE_MENU,
	SYBRPC_CLOSE_TRADER_MENU,
	SYBRPC_ACTION_TRADER,
	SYBRPC_SELF_KICK,
	SYBRPC_SYNC_CRAFTS
};

enum SyberiaScreenEquipPages {
	SYBSEP_SPAWN_PAGE = 0,
	SYBSEP_BODY_PAGE = 1,
	SYBSEP_PANTS_PAGE = 2,
	SYBSEP_FOOT_PAGE = 3,
	SYBSEP_HEAD_PAGE = 4,
	SYBSEP_MASK_PAGE = 5,
	SYBSEP_GLOVES_PAGE = 6,
	SYBSEP_VEST_PAGE = 7,
	SYBSEP_BACKPACK_PAGE = 8,
	SYBSEP_WEAPON_PAGE = 9,
	SYBSEP_ITEMS_PAGE = 10,
	SYBSEP_SPECIAL_PAGE = 11,
	SYBSEP_TOTAL_COUNT = 12
};

enum SyberiaSleepingLevel {
	SYBSL_ENERGED = -4,
	SYBSL_SICK = -3,
	SYBSL_COLD = -2,
	SYBSL_HOT = -1,
	SYBSL_NONE = 0,
	SYBSL_COMFORT = 1,
	SYBSL_PERFECT = 2
};

enum SyberiaSkillType {
	SYBSKILL_IMMUNITY = 0,
	SYBSKILL_ATHLETICS = 1,
	SYBSKILL_STRENGTH = 2,
	SYBSKILL_MEDICINE = 3,
	SYBSKILL_STEALTH = 4,
	SYBSKILL_SURVIVAL = 5,
	SYBSKILL_FARMING = 6,
	SYBSKILL_HUNTING = 7,
	SYBSKILL_FISHING = 8,
	SYBSKILL_MECHANICS = 9,
	SYBSKILL_ELECTRONICS = 10,
	SYBSKILL_CARPENTRY = 11,
	SYBSKILL_METALWORKING = 12,
	SYBSKILL_BUILDING = 13,
	SYBSKILL_FIREARMS = 14,
	SYBSKILL_LOCKPICKING = 15,
	SYBSKILL_HERBALISM = 16,
	SYBSKILL_SEAMSTRESS = 17,
	
	// Total count of all skills (internal use only)
	SYBSKILL_TOTALCOUNT = 18
};

const int SYBERIA_ENABLED_SKILLS_COUNT = 7;
const int SYBERIA_ENABLED_SKILLS_LIST[SYBERIA_ENABLED_SKILLS_COUNT] = {
	SyberiaSkillType.SYBSKILL_IMMUNITY,
	SyberiaSkillType.SYBSKILL_MEDICINE,
	SyberiaSkillType.SYBSKILL_ATHLETICS,
	SyberiaSkillType.SYBSKILL_STRENGTH,
	SyberiaSkillType.SYBSKILL_STEALTH,
	SyberiaSkillType.SYBSKILL_SURVIVAL,
	SyberiaSkillType.SYBSKILL_HUNTING
};

const int NTFKEY_SLEEPING = 1000;
const int NTFKEY_MINDSTATE = 1001;
const int NTFKEY_BULLETHIT = 1100;
const int NTFKEY_KNIFEHIT = 1101;
const int NTFKEY_HEMATOMA = 1102;
const int NTFKEY_VISCERADMG = 1103;
const int NTFKEY_CONCUSSION = 1104;
const int NTFKEY_PAIN = 1105;
const int NTFKEY_PAINKILLER = 1106;
const int NTFKEY_ANTIBIOTIC = 1107;
const int NTFKEY_STOMATCHHEAL = 1108;
const int NTFKEY_SEPSIS = 1109;
const int NTFKEY_ZVIRUS = 1110;
const int NTFKEY_BANDAGE1 = 1111;
const int NTFKEY_BANDAGE2 = 1112;
const int NTFKEY_HEMOSTATIC = 1113;
const int NTFKEY_HEMATOPOIESIS = 1114;
const int NTFKEY_USESALVE = 1115;
const int NTFKEY_ADRENALIN = 1116;
const int NTFKEY_OVERDOSED = 1117;
const int NTFKEY_INFLUENZA = 1118;
const int NTFKEY_STOMATCHPOISONING = 1119;
const int NTFKEY_RADIATIONSICKNESS = 1120;
const int NTFKEY_RADIOPROTECTION = 1121;
const int NTFKEY_DISINFECTED = 1122;
const int NTFKEY_ANTIDEPRESANT = 1123;

const int LEVELED_NTFKEY_BADGES_COUNT = 11;
const int LEVELED_NTFKEY_BADGES[LEVELED_NTFKEY_BADGES_COUNT] = { 
	NTFKEY_PAIN, NTFKEY_PAINKILLER, NTFKEY_ADRENALIN, NTFKEY_OVERDOSED, NTFKEY_INFLUENZA, 
	NTFKEY_ANTIBIOTIC, NTFKEY_STOMATCHPOISONING, NTFKEY_STOMATCHHEAL, NTFKEY_RADIATIONSICKNESS,
	NTFKEY_RADIOPROTECTION, NTFKEY_ANTIDEPRESANT 
};

class SyberiaConfig
{
	// Auth	
	ref array<string> m_allowedLettersInName = new array<string>;
	
	// Sleeping
	int m_sleepingMaxValue;
	int m_sleepingLevel5;
	int m_sleepingLevel4;
	int m_sleepingLevel3;
	int m_sleepingLevel2;
	
	// Mindstate
	float m_mindstateMaxValue;
	float m_mindstateLevel5;
	float m_mindstateLevel4;
	float m_mindstateLevel3;
	float m_mindstateLevel2;
	
	protected void ConfigGetTextArray(string path, out array<string> result, int count)
	{
		if (!GetGame().ConfigIsExisting(path))
			Error("Config property not exists");
		
		GetGame().ConfigGetTextArray(path, result);
		if (count != -1 && result.Count() != count)
			Error("Count check failed for config loading");
	}
	
	protected void ConfigGetFloatArray(string path, out array<float> result, int count)
	{
		if (!GetGame().ConfigIsExisting(path))
			Error("Config property not exists");
		
		GetGame().ConfigGetFloatArray(path, result);
		if (count != -1 && result.Count() != count)
			Error("Count check failed for config loading");
	}
	
	protected void ConfigGetIntArray(string path, out array<int> result, int count)
	{
		if (!GetGame().ConfigIsExisting(path))
			Error("Config property not exists");
		
		GetGame().ConfigGetIntArray(path, result);
		if (count != -1 && result.Count() != count)
			Error("Count check failed for config loading");
	}
	
	protected int ConfigGetInt(string path)
	{
		if (!GetGame().ConfigIsExisting(path))
			Error("Config property not exists");
		
		return GetGame().ConfigGetInt(path);
	}
	
	protected float ConfigGetFloat(string path)
	{
		if (!GetGame().ConfigIsExisting(path))
			Error("Config property not exists");
		
		return GetGame().ConfigGetFloat(path);
	}
	
	void Init()
	{
		// Auth
		ConfigGetTextArray("CfgSyberia AuthSystem allowedLettersInName", m_allowedLettersInName, -1);
		
		// Sleeping
		m_sleepingMaxValue = ConfigGetInt("CfgSyberia SleepingSystem sleepingMaxValue");
		m_sleepingLevel5 = ConfigGetInt("CfgSyberia SleepingSystem sleepingLevel5");
		m_sleepingLevel4 = ConfigGetInt("CfgSyberia SleepingSystem sleepingLevel4");
		m_sleepingLevel3 = ConfigGetInt("CfgSyberia SleepingSystem sleepingLevel3");
		m_sleepingLevel2 = ConfigGetInt("CfgSyberia SleepingSystem sleepingLevel2");
		
		// Mindstate
		m_mindstateMaxValue = ConfigGetFloat("CfgSyberia MindstateSystem mindstateMaxValue");
		m_mindstateLevel5 = ConfigGetFloat("CfgSyberia MindstateSystem mindstateLevel5");
		m_mindstateLevel4 = ConfigGetFloat("CfgSyberia MindstateSystem mindstateLevel4");
		m_mindstateLevel3 = ConfigGetFloat("CfgSyberia MindstateSystem mindstateLevel3");
		m_mindstateLevel2 = ConfigGetFloat("CfgSyberia MindstateSystem mindstateLevel2");
	}
};

static ref SyberiaConfig m_syberiaConfig = null;
ref SyberiaConfig GetSyberiaConfig()
{
	if (!m_syberiaConfig)
	{
		m_syberiaConfig = new SyberiaConfig;
		m_syberiaConfig.Init();
	}
	
	return m_syberiaConfig;
};
