//#include "structs.h"
//#include "stdafx.h"

#ifndef RECOMMENDER_H
#define RECOMMENDER_H

class Rec_Manager;

class Reccomender{
public:
	friend Rec_Manager;

	Reccomender(sql::Connection* con,int num_of_User,int num_of_Item);
	~Reccomender();

	float user_distance(int target_id,int client_id);
	void make_neighbor_list(int client_id);
	float W_point(int target_item,int target_id,int client);
	float W_point_em(int target_id,int client_id);
	int* make_Rec_Item_list(int client_id);
	int get_rec_item(int target_id,int client_id);

private:
	int* user_cluster;
	int* neighbor_list;
	float** RatingTable;

	int num_of_user;
	int num_of_item;

	sql::Connection* _con;

};

#endif RECOMMENDER_H
