// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include "structs.h"
#include "Queue.h"
#include "Inter_Interface.h"
#include "Intra_Interface.h"
#include "Member_Manager.h"
#include "Rating_Manager.h"
#include "Clustering_Manager.h"
#include "Recommendation_Controller.h"
#include "Recommendation_Manager.h"
#include "Recommendation_Model_Manager.h"
#include "Recommender.h"
#include "Rule_Apllier.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <sstream>
#include <ctime>