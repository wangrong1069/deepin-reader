#ifndef MSGHEADER_H
#define MSGHEADER_H

#include <QString>

/**
 *  消息类型 定义
 */

namespace {

//  消息类型
enum E_MSG_TYPE {
    E_MSG_TYPE_BEGIN = 0,
    E_APP_MSG_TYPE,
    E_MSG_TYPE_END
};

enum E_HOMEWIDGET_MSG {
    E_HOMEWIDGET_MSG_BEGIN = E_MSG_TYPE_END + 50,
    E_HOMEWIDGET_MSG_END
};

//  central 消息
enum E_CENTRAL_MSG {
    E_CENTRAL_MSG_BEGIN = E_HOMEWIDGET_MSG_END + 50,
    E_CENTRAL_MSG_END
};

//  搜索框消息
enum E_FIND_WIDGET_MSG {
    E_FIND_WIDGET_BEGIN = E_CENTRAL_MSG_END + 50,
    E_FIND_PREV,
    E_FIND_NEXT,
    E_FIND_EXIT,
    E_FIND_CONTENT,
    MSG_FIND_NONE_CONTENT,       //  未搜索到内容消息
    E_FIND_WIDGET_END,
};

//  消息类型
enum MSG_TYPE {
    MSG_TYPE_BEGIN = E_CENTRAL_MSG_END + 50,
    MSG_HANDLESHAPE,                    //  手型 消息
    MSG_NOTIFY_KEY_MSG,                 //  按键通知消息
    MSG_TYPE_END,
};

//  窗口自适应状态
enum E_ADAPTE_MSG {
    NO_ADAPTE_State,
    ADAPTE_WIDGET_State,
    ADAPTE_HEIGHT_State
};

//  多标签消息
enum E_TAB_TYPE {
    MSG_TAB_MSG_BEGIN = MSG_TYPE_END + 50,
    MSG_TAB_ADD,                    //  添加 tab 消息
    MSG_TAB_SHOW_FILE_CHANGE,       //  文档 显示切换消息
    MSG_TAB_MSG_END,
};

//  文档操作消息
enum E_DOC_TYPE_MSG {
    MSG_DOC_JUMP_PAGE = MSG_TAB_MSG_END + 50,             //  请求跳转页面
    MSG_OPEN_FILE_PATH,                                 //  打开的文件消息
    MSG_SAVE_AS_FILE_PATH,                              //  保存文件消息
    MSG_OPERATION_OPEN_FILE_FAIL,                       //  打开文件失败
    MSG_OPERATION_FIRST_PAGE,                           //  第一页
    MSG_OPERATION_PREV_PAGE,                            //  上一页
    MSG_OPERATION_NEXT_PAGE,                            //  下一页
    MSG_OPERATION_END_PAGE,                             //  最后一页
    MSG_SAVE_FILE,                                      //  关闭当前文档　消息
    MSG_NOT_SAVE_FILE,                                  //  关闭当前文档　消息
    MSG_NOT_CHANGE_SAVE_FILE,                           //  关闭当前文档　消息
};

//  书签消息
enum E_BOOKMARK_MSG {
    E_BOOKMARK_MSG_BEGIN = MSG_NOT_CHANGE_SAVE_FILE + 50,
    MSG_OPERATION_ADD_BOOKMARK,            //  添加书签
    MSG_OPERATION_DELETE_BOOKMARK,          //  删除书签
    E_BOOKMARK_MSG_END
};


//  高亮&注释消息
enum E_NOTE_MSG {
    E_NOTE_MSG_BEGIN = E_BOOKMARK_MSG_END + 50,
    MSG_NOTE_ADD_CONTENT,        //  添加注释内容 消息
    MSG_NOTE_ADD_HIGHLIGHT_COLOR,       //  添加高亮
    MSG_NOTE_UPDATE_HIGHLIGHT_COLOR,    //  更新 高亮显示
    MSG_NOTE_REMOVE_HIGHLIGHT,    //  移除 高亮显示
//    MSG_NOTE_ADD_HIGHLIGHT_NOTE,        //  添加高亮注释
    MSG_OPERATION_TEXT_ADD_ANNOTATION,      //  菜单点击, 添加注释
    MSG_OPERATION_TEXT_SHOW_NOTEWIDGET,     //  菜单点击, 已经有注释内容, 显示注释窗口
    MSG_NOTE_ADD_ITEM,                  //  添加注释子节点
    MSG_NOTE_UPDATE_CONTENT,            //  更新高亮注释内容
    MSG_NOTE_UPDATE_ITEM,               //  更新高亮注释节点
    MSG_NOTE_DELETE_CONTENT,            //  删除注释内容 消息
    MSG_NOTE_DELETE_ITEM,               //  删除注释子节点
    MSG_NOTE_PAGE_SHOW_NOTEWIDGET,      //  页面注释显示 注释内容界面
    MSG_NOTE_PAGE_ADD_CONTENT,          //  页面注释 添加内容
    MSG_NOTE_PAGE_ADD_ITEM,             //  页面注释 添加节点
    MSG_NOTE_PAGE_UPDATE_CONTENT,       //  页面注释 更新内容
    MSG_NOTE_PAGE_UPDATE_ITEM,          //  页面注释 更新节点
    MSG_NOTE_PAGE_DELETE_CONTENT,       //  页面注释 删除内容
    MSG_NOTE_PAGE_DELETE_ITEM,          //  页面注释 删除节点
    E_NOTE_MSG_END,
};

}


#endif  // MSGHEADER_H