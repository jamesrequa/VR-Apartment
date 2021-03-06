﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// GvrViewer
struct GvrViewer_t2583885279;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleporter
struct  Teleporter_t1547051872  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Teleporter::height
	float ___height_2;
	// System.Single Teleporter::speed
	float ___speed_3;
	// UnityEngine.Transform[] Teleporter::waypoints
	TransformU5BU5D_t3764228911* ___waypoints_4;
	// System.Int32 Teleporter::currentWaypointIndex
	int32_t ___currentWaypointIndex_5;
	// GvrViewer Teleporter::viewer
	GvrViewer_t2583885279 * ___viewer_6;
	// UnityEngine.Camera Teleporter::cam
	Camera_t189460977 * ___cam_7;

public:
	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___height_2)); }
	inline float get_height_2() const { return ___height_2; }
	inline float* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(float value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___waypoints_4)); }
	inline TransformU5BU5D_t3764228911* get_waypoints_4() const { return ___waypoints_4; }
	inline TransformU5BU5D_t3764228911** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(TransformU5BU5D_t3764228911* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_4, value);
	}

	inline static int32_t get_offset_of_currentWaypointIndex_5() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___currentWaypointIndex_5)); }
	inline int32_t get_currentWaypointIndex_5() const { return ___currentWaypointIndex_5; }
	inline int32_t* get_address_of_currentWaypointIndex_5() { return &___currentWaypointIndex_5; }
	inline void set_currentWaypointIndex_5(int32_t value)
	{
		___currentWaypointIndex_5 = value;
	}

	inline static int32_t get_offset_of_viewer_6() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___viewer_6)); }
	inline GvrViewer_t2583885279 * get_viewer_6() const { return ___viewer_6; }
	inline GvrViewer_t2583885279 ** get_address_of_viewer_6() { return &___viewer_6; }
	inline void set_viewer_6(GvrViewer_t2583885279 * value)
	{
		___viewer_6 = value;
		Il2CppCodeGenWriteBarrier(&___viewer_6, value);
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(Teleporter_t1547051872, ___cam_7)); }
	inline Camera_t189460977 * get_cam_7() const { return ___cam_7; }
	inline Camera_t189460977 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(Camera_t189460977 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
