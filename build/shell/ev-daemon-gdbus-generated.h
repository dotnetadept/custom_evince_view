/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __EV_DAEMON_GDBUS_GENERATED_H__
#define __EV_DAEMON_GDBUS_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.evince.Daemon */

#define EV_TYPE_DAEMON (ev_daemon_get_type ())
#define EV_DAEMON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_DAEMON, EvDaemon))
#define EV_IS_DAEMON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_DAEMON))
#define EV_DAEMON_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_DAEMON, EvDaemonIface))

struct _EvDaemon;
typedef struct _EvDaemon EvDaemon;
typedef struct _EvDaemonIface EvDaemonIface;

struct _EvDaemonIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_find_document) (
    EvDaemon *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_uri,
    gboolean arg_spawn);

  gboolean (*handle_register_document) (
    EvDaemon *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_uri);

  gboolean (*handle_unregister_document) (
    EvDaemon *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_uri);

};

GType ev_daemon_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ev_daemon_interface_info (void);
guint ev_daemon_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ev_daemon_complete_register_document (
    EvDaemon *object,
    GDBusMethodInvocation *invocation,
    const gchar *owner);

void ev_daemon_complete_unregister_document (
    EvDaemon *object,
    GDBusMethodInvocation *invocation);

void ev_daemon_complete_find_document (
    EvDaemon *object,
    GDBusMethodInvocation *invocation,
    const gchar *owner);



/* D-Bus method calls: */
void ev_daemon_call_register_document (
    EvDaemon *proxy,
    const gchar *arg_uri,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_daemon_call_register_document_finish (
    EvDaemon *proxy,
    gchar **out_owner,
    GAsyncResult *res,
    GError **error);

gboolean ev_daemon_call_register_document_sync (
    EvDaemon *proxy,
    const gchar *arg_uri,
    gchar **out_owner,
    GCancellable *cancellable,
    GError **error);

void ev_daemon_call_unregister_document (
    EvDaemon *proxy,
    const gchar *arg_uri,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_daemon_call_unregister_document_finish (
    EvDaemon *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ev_daemon_call_unregister_document_sync (
    EvDaemon *proxy,
    const gchar *arg_uri,
    GCancellable *cancellable,
    GError **error);

void ev_daemon_call_find_document (
    EvDaemon *proxy,
    const gchar *arg_uri,
    gboolean arg_spawn,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_daemon_call_find_document_finish (
    EvDaemon *proxy,
    gchar **out_owner,
    GAsyncResult *res,
    GError **error);

gboolean ev_daemon_call_find_document_sync (
    EvDaemon *proxy,
    const gchar *arg_uri,
    gboolean arg_spawn,
    gchar **out_owner,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EV_TYPE_DAEMON_PROXY (ev_daemon_proxy_get_type ())
#define EV_DAEMON_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_DAEMON_PROXY, EvDaemonProxy))
#define EV_DAEMON_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_DAEMON_PROXY, EvDaemonProxyClass))
#define EV_DAEMON_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_DAEMON_PROXY, EvDaemonProxyClass))
#define EV_IS_DAEMON_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_DAEMON_PROXY))
#define EV_IS_DAEMON_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_DAEMON_PROXY))

typedef struct _EvDaemonProxy EvDaemonProxy;
typedef struct _EvDaemonProxyClass EvDaemonProxyClass;
typedef struct _EvDaemonProxyPrivate EvDaemonProxyPrivate;

struct _EvDaemonProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EvDaemonProxyPrivate *priv;
};

struct _EvDaemonProxyClass
{
  GDBusProxyClass parent_class;
};

GType ev_daemon_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvDaemonProxy, g_object_unref)
#endif

void ev_daemon_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvDaemon *ev_daemon_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EvDaemon *ev_daemon_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ev_daemon_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvDaemon *ev_daemon_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EvDaemon *ev_daemon_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EV_TYPE_DAEMON_SKELETON (ev_daemon_skeleton_get_type ())
#define EV_DAEMON_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_DAEMON_SKELETON, EvDaemonSkeleton))
#define EV_DAEMON_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_DAEMON_SKELETON, EvDaemonSkeletonClass))
#define EV_DAEMON_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_DAEMON_SKELETON, EvDaemonSkeletonClass))
#define EV_IS_DAEMON_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_DAEMON_SKELETON))
#define EV_IS_DAEMON_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_DAEMON_SKELETON))

typedef struct _EvDaemonSkeleton EvDaemonSkeleton;
typedef struct _EvDaemonSkeletonClass EvDaemonSkeletonClass;
typedef struct _EvDaemonSkeletonPrivate EvDaemonSkeletonPrivate;

struct _EvDaemonSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EvDaemonSkeletonPrivate *priv;
};

struct _EvDaemonSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ev_daemon_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvDaemonSkeleton, g_object_unref)
#endif

EvDaemon *ev_daemon_skeleton_new (void);


/* ---- */

#define EV_TYPE_OBJECT (ev_object_get_type ())
#define EV_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT, EvObject))
#define EV_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT))
#define EV_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_OBJECT, EvObject))

struct _EvObject;
typedef struct _EvObject EvObject;
typedef struct _EvObjectIface EvObjectIface;

struct _EvObjectIface
{
  GTypeInterface parent_iface;
};

GType ev_object_get_type (void) G_GNUC_CONST;

EvDaemon *ev_object_get_daemon (EvObject *object);
EvDaemon *ev_object_peek_daemon (EvObject *object);

#define EV_TYPE_OBJECT_PROXY (ev_object_proxy_get_type ())
#define EV_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxy))
#define EV_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_PROXY))
#define EV_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_PROXY))

typedef struct _EvObjectProxy EvObjectProxy;
typedef struct _EvObjectProxyClass EvObjectProxyClass;
typedef struct _EvObjectProxyPrivate EvObjectProxyPrivate;

struct _EvObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  EvObjectProxyPrivate *priv;
};

struct _EvObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType ev_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectProxy, g_object_unref)
#endif

EvObjectProxy *ev_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define EV_TYPE_OBJECT_SKELETON (ev_object_skeleton_get_type ())
#define EV_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeleton))
#define EV_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_SKELETON))
#define EV_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_SKELETON))

typedef struct _EvObjectSkeleton EvObjectSkeleton;
typedef struct _EvObjectSkeletonClass EvObjectSkeletonClass;
typedef struct _EvObjectSkeletonPrivate EvObjectSkeletonPrivate;

struct _EvObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  EvObjectSkeletonPrivate *priv;
};

struct _EvObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType ev_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectSkeleton, g_object_unref)
#endif

EvObjectSkeleton *ev_object_skeleton_new (const gchar *object_path);
void ev_object_skeleton_set_daemon (EvObjectSkeleton *object, EvDaemon *interface_);

/* ---- */

#define EV_TYPE_OBJECT_MANAGER_CLIENT (ev_object_manager_client_get_type ())
#define EV_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClient))
#define EV_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_MANAGER_CLIENT))
#define EV_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _EvObjectManagerClient EvObjectManagerClient;
typedef struct _EvObjectManagerClientClass EvObjectManagerClientClass;
typedef struct _EvObjectManagerClientPrivate EvObjectManagerClientPrivate;

struct _EvObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  EvObjectManagerClientPrivate *priv;
};

struct _EvObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectManagerClient, g_object_unref)
#endif

GType ev_object_manager_client_get_type (void) G_GNUC_CONST;

GType ev_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void ev_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void ev_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __EV_DAEMON_GDBUS_GENERATED_H__ */
