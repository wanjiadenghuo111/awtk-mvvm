﻿
/*This file is generated by code generator*/

#include "book_store.h"
#include "book_view_model.h"
#include "mvvm/base/view_model_array.h"

#ifndef TK_BOOK_STORE_VIEW_MODEL_H
#define TK_BOOK_STORE_VIEW_MODEL_H

BEGIN_C_DECLS
/**
 * @class book_store_view_model_t
 *
 * view model of book_store
 *
 */
typedef struct _book_store_view_model_t {
  view_model_array_t view_model_array;

  /*model object*/
  book_store_t* book_store;
  view_model_t* book_view_model;
} book_store_view_model_t;

/**
 * @method book_store_view_model_create
 * 创建book_store view model对象。
 *
 * @annotation ["constructor"]
 * @param {navigator_request_t*} req 请求参数。
 *
 * @return {view_model_t} 返回view_model_t对象。
 */
view_model_t* book_store_view_model_create(navigator_request_t* req);

/**
 * @method book_store_view_model_create_with
 * 创建book_store view model对象。
 *
 * @annotation ["constructor"]
 * @param {book_store_t*}  book_store book_store对象。
 *
 * @return {view_model_t} 返回view_model_t对象。
 */
view_model_t* book_store_view_model_create_with(book_store_t* book_store);

END_C_DECLS

#endif /*TK_BOOK_STORE_VIEW_MODEL_H*/