#ifndef SHAREDDEFINES_H
#define SHAREDDEFINES_H

#include "Server/Protocol/Opcodes.h"

enum CharacterCreationResult
{
    CHARACTER_CREATION_RESULT_SUCCESS = 0,
    CHARACTER_CREATION_RESULT_FAILED = 1,
    CHARACTER_CREATION_RESULT_NAME_EXISTS = 10,
    CHARACTER_CREATION_RESULT_INVALID_NAME = 11,
    CHARACTER_CREATION_RESULT_TOO_MANY_CHARACTERS = 12
};

enum CharacterBreed
{
    CHARACTER_BREED_NONE            = 0,
    CHARACTER_BREED_FECA            = 1,
    CHARACTER_BREED_OSAMOAD         = 2,
    CHARACTER_BREED_ENUTROF         = 3,
    CHARACTER_BREED_SRAM            = 4,
    CHARACTER_BREED_XELOR           = 5,
    CHARACTER_BREED_ECAFLIP         = 6,
    CHARACTER_BREED_ENIRIPSA        = 7,
    CHARACTER_BREED_IOP             = 8,
    CHARACTER_BREED_CRA             = 9,
    CHARACTER_BREED_SADIDA          = 10,
    CHARACTER_BREED_SACRIER         = 11,
    CHARACTER_BREED_PANDAWA         = 12,
    CHARACTER_BREED_ROGUE           = 13,
    CHARACTER_BREED_MASQUERAIDER    = 14,
    CHARACTER_BREED_FOGGERNAUT      = 16,
    CHARACTER_BREED_TUTORIAL        = 17
};

enum FightTypeId
{
    FIGHT_TYPE_ID_PVP               = 0,
    FIGHT_TYPE_ID_PVE               = 1,
    FIGHT_TYPE_ID_TUTO              = 2,
    FIGHT_TYPE_ID_STDNOPLACEMENT    = 3,
    FIGHT_TYPE_ID_NOPLACEMENT_MOVEPLAYER = 4,
    FIGHT_TYPE_ID_PROTECTOR_ASSAULT = 5,
    FIGHT_TYPE_ID_TRAINING_FIGHT    = 6,
    FIGHT_TYPE_ID_TRAINING_FIGHT_WITH_XP_WITHOUT_REPORT = 7,
    FIGHT_TYPE_ID_OGREST_FIGHT_INTRO = 8,
    FIGHT_TYPE_ID_ARCADE_DUNGEON    = 9,
    FIGHT_TYPE_ID_NO_DEFEAT_CONTINUE_WHEN_NO_PLAYERS = 10,
    FIGHT_TYPE_ID_BOUFBOWL_MATCH    = 11,
    FIGHT_TYPE_ID_TRAINING_FIGHT_WITHOUT_PENALTIES = 12,
    FIGHT_TYPE_ID_CONTINUE_WHEN_NO_PLAYERS = 13,
    FIGHT_TYPE_ID_NEW_TUTO          = 14,
    FIGHT_TYPE_ID_NEW_TUTO_WITH_PLACEMENT = 15,
    FIGHT_TYPE_ID_PVE_WITHOUT_COMPANION = 16,
    FIGHT_TYPE_ID_COLLECT_FIGHT     = 17,
    FIGHT_TYPE_ID_DUEL              = 18
};

enum Nations
{
    NATION_NONE                     = 0,
    NATION_AMAKNA                   = 30,
    NATION_BONTA                    = 31,
    NATION_BRAKMAR                  = 32,
    NATION_SUFOKIA                  = 33
};


enum InteractiveElementType
{
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE                   = 0,
    INTERACTIVE_ELEMENT_TYPE_TURN_ON                    = 1,
    INTERACTIVE_ELEMENT_TYPE_TURN_OFF                   = 2,
    INTERACTIVE_ELEMENT_TYPE_PUSH                       = 3,
    INTERACTIVE_ELEMENT_TYPE_PULL                       = 4,
    INTERACTIVE_ELEMENT_TYPE_WALKON                     = 5,
    INTERACTIVE_ELEMENT_TYPE_SITON                      = 6,
    INTERACTIVE_ELEMENT_TYPE_STANDUP                    = 7,
    INTERACTIVE_ELEMENT_TYPE_NONE                       = 8,
    INTERACTIVE_ELEMENT_TYPE_WALKIN                     = 9,
    INTERACTIVE_ELEMENT_TYPE_WALKOUT                    = 10,
    INTERACTIVE_ELEMENT_TYPE_ENTER                      = 11,
    INTERACTIVE_ELEMENT_TYPE_START_BROWSING             = 12,
    INTERACTIVE_ELEMENT_TYPE_STOP_BROWSING              = 13,
    INTERACTIVE_ELEMENT_TYPE_START_MANAGE               = 14,
    INTERACTIVE_ELEMENT_TYPE_STOP_MANAGE                = 15,
    INTERACTIVE_ELEMENT_TYPE_CONFIRM_COLLECT            = 16,
    INTERACTIVE_ELEMENT_TYPE_OPEN                       = 17,
    INTERACTIVE_ELEMENT_TYPE_CLOSE                      = 18,
    INTERACTIVE_ELEMENT_TYPE_LOCK                       = 19,
    INTERACTIVE_ELEMENT_TYPE_UNLOCK                     = 20,
    INTERACTIVE_ELEMENT_TYPE_DISCONNECT_AND_ACTIVATE    = 21,
    INTERACTIVE_ELEMENT_TYPE_CHALLENGE_ACTIVATE         = 22,
    INTERACTIVE_ELEMENT_TYPE_REPACK                     = 23,
    INTERACTIVE_ELEMENT_TYPE_REGISTER                   = 24,
    INTERACTIVE_ELEMENT_TYPE_VOTE                       = 25,
    INTERACTIVE_ELEMENT_TYPE_RECYCLE                    = 26,
    INTERACTIVE_ELEMENT_TYPE_MOVE                       = 27,
    INTERACTIVE_ELEMENT_TYPE_READ                       = 28,
    INTERACTIVE_ELEMENT_TYPE_ROTATE                     = 29,
    INTERACTIVE_ELEMENT_TYPE_ASK_INFORMATIONS           = 30,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE2                  = 31,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE3                  = 32,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE4                  = 33,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE5                  = 34,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE6                  = 35,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE7                  = 36,
    INTERACTIVE_ELEMENT_TYPE_ACTIVATE8                  = 37
};

enum NPC_STATE
{
    NPC_STATE_NONE                                      = 0,
    NPC_STATE_RIGHT_HAND_LEVEL                          = 1,
    NPC_STATE_CANT_ATTACK                               = 2,
    NPC_STATE_IMMORTAL                                  = 3,
    NPC_STATE_CANT_BE_ATTACKED                          = 4,
    NPC_STATE_IS_BLOCKING                               = 5,
    NPC_STATE_CANT_BE_JOINED                            = 6,
    NPC_STATE_NO_SPELL_OR_SKILL_XP                      = 7,
    NPC_STATE_PREGNANT                                  = 8,
    NPC_STATE_BUSY                                      = 9,
    NPC_STATE_DEAD                                      = 10,
    NPC_STATE_CHALLENGE_NPC                             = 11,
    NPC_STATE_ADMIN_NPC                                 = 12,
    NPC_STATE_SEDUCE                                    = 13,
    NPC_STATE_JAIL_KEEPER                               = 14,
    NPC_STATE_TRAINING_MOB                              = 15,
    NPC_STATE_WELL_FED                                  = 16,
    NPC_STATE_CANT_BE_TEMPORARY_ATTACKED                = 17,
    NPC_STATE_CANT_AGGRO_TRACK                          = 18,
    NPC_STATE_DONT_NEED_PATH_TO_FIGHT                   = 19,
    NPC_STATE_TELEPORT_ON_ENTER_FIGHT                   = 20,
    NPC_STATE_NPC                                       = 21,
    NPC_STATE_AMAKNA_SUPPORTER                          = 22,
    NPC_STATE_BONTA_SUPPORTER                           = 23,
    NPC_STATE_BRAKMAR_SUPPORTER                         = 24,
    NPC_STATE_RUSHU_SUPPORTER                           = 25,
    NPC_STATE_NOT_PRESENT_IN_TIMELINE                   = 26,
    NPC_STATE_HOODED_MONSTER                            = 27,
    NPC_STATE_BOSS                                      = 28,
    NPC_STATE_SUFOKIA_SUPPORTER                         = 29,
    NPC_STATE_ARCH                                      = 30,
    NPC_STATE_NPC_NO_MONSTER_ACTION                     = 31,
    NPC_STATE_IS_ARCADE_NPC                             = 32,
    NPC_STATE_IS_ARCADE_WAVE_NPC                        = 33,
    NPC_STATE_ULTIMATE_BOSS                             = 34,
    NPC_STATE_CANT_BE_AGGRO                             = 35,
    NPC_STATE_ALMANACH_NPC                              = 36,
    NPC_STATE_OGREST_CHAOS_NPC                          = 37,
    NPC_STATE_NO_CORPSE_WHEN_DEAD                       = 38,
    NPC_STATE_DUEL_DISABLED                             = 39,
    NPC_STATE_AGRESSION_DISABLED                        = 40,
    NPC_STATE_EXCHANGE_DISABLED                         = 41,
    NPC_STATE_GROUP_DISABLED                            = 42,
    NPC_STATE_PRIVATE_CHAR_MRU_DISABLED                 = 43,
    NPC_STATE_FOLLOW_PLAYER_DISABLED                    = 44,
    NPC_STATE_MONSTER_ACTION_DISABLED                   = 45,
    NPC_STATE_MONSTER_FIGHT_DISABLED                    = 46,
    NPC_STATE_MONSTER_COLLECT_DISABLED                  = 47,
    NPC_STATE_CANT_MODIFY_SHORTCUT_BARS                 = 48,
    NPC_STATE_CHAT_UI_INTERACTION_DISABLED              = 49,
    NPC_STATE_FOLLOW_ACHIEVEMENT_UI_FORCE_OPENED        = 50,
    NPC_STATE_ACHIEVEMENT_AUTO_COMPASS                  = 51,
    NPC_STATE_DISPLAY_LIGHT_PROTECTOR_INFORMATION       = 52,
    NPC_STATE_PROTECTOR_SATISFACTION_GENERIC_BONUS_DISABLED = 53,
    NPC_STATE_CALL_HELP_DISABLED                        = 54,
    NPC_STATE_FIGHT_LOCK_DISABLED                       = 55,
    NPC_STATE_CELL_REPORT_DISABLED                      = 56,
    NPC_STATE_HIDE_FIGHTERS_DISABLED                    = 57,
    NPC_STATE_GIVE_UP_DISABLED                          = 58,
    NPC_STATE_JOIN_IN_FIGHT_MRU_DISABLED                = 59,
    NPC_STATE_CANT_UNLOAD_TUTORIAL_DIALOG               = 60,
    NPC_STATE_NO_XP                                     = 61,
    NPC_STATE_RESOURCE_COLLECT_DISABLED                 = 62,
    NPC_STATE_WAKFU_GAUGE_DISABLED                      = 63,
    NPC_STATE_GROUP_WITH_OTHER_BREED_DISABLED           = 64,
    NPC_STATE_COMPANION                                 = 65,
    NPC_STATE_COMPANION_FREE                            = 66,
    NPC_STATE_COMPANION_DISABLED_FOR_FIGHT              = 67,
    NPC_STATE_NO_REROLL_XP                              = 68,
    NPC_STATE_RELIC_SPECIAL_JUMP                        = 69,
    NPC_STATE_CHALLENGE_DISABLED                        = 70
};

#endif
