﻿
/*This file is generated by code generator*/

#include "shape.h"
#include "mvvm/base/view_model.h"

#ifndef TK_SHAPE_VIEW_MODEL_H
#define TK_SHAPE_VIEW_MODEL_H

BEGIN_C_DECLS
/**
 * @class shape_view_model_t
 *
 * view model of shape
 *
 */
typedef struct _shape_view_model_t {
  view_model_t view_model;

  /*model object*/
  shape_t* shape;
} shape_view_model_t;

/**
 * @method shape_view_model_create
 * 创建shape view model对象。
 *
 * @annotation ["constructor"]
 * @param {navigator_request_t*} req 请求参数。
 *
 * @return {view_model_t} 返回view_model_t对象。
 */
view_model_t* shape_view_model_create(navigator_request_t* req);

/**
 * @method shape_view_model_create_with
 * 创建shape view model对象。
 *
 * @annotation ["constructor"]
 * @param {navigator_request_t*} req 请求参数。
 *
 * @return {view_model_t} 返回view_model_t对象。
 */
view_model_t* shape_view_model_create_with(shape_t* shape);

/**
 * @method shape_view_model_attach
 * 关联到shape对象。
 *
 * @param {view_model_t*} view_model view_model对象。
 * @param {shape_t*} shape shape对象。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t shape_view_model_attach(view_model_t* vm, shape_t* shape);

END_C_DECLS

#endif /*TK_SHAPE_VIEW_MODEL_H*/
