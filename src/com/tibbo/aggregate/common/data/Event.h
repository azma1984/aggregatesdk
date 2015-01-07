#ifndef _EVENT_H_
#define _EVENT_H_

import java.util.*;

import com.tibbo.aggregate.common.context.*;
import com.tibbo.aggregate.common.datatable.*;
import com.tibbo.aggregate.common.event.*;
import com.tibbo.aggregate.common.security.*;
import com.tibbo.aggregate.common.util.*;

#include <util/Date>
#include <string>
#include <list>

public class Event implements Cloneable
{
  public final static long DEFAULT_EVENT_EXPIRATION_PERIOD = 100 * TimeHelper.DAY_IN_MS; // Milliseconds
  
private:  
	void init(String context, String name, int level, DataTable data, Long id);
	
	long id;
	Date instantiationtime;
	Date creationtime;
	Date expirationtime;
	String context;
	String name;
	std::list<Acknowledgement> acknowledgements;
	DataTable* data;
	int listener;
	int level;
	Permissions permissions;
	int count = 1;
	std::list<Enrichment> enrichments;  
	//TODO:
	void*/*Object*/ originator;
	std::string deduplicationId;
  
public:
	Event()
	Event(String context, EventDefinition def, int level, DataTable data, Long id, Date creationtime, Permissions permissions);
	Event(String context, String name, int level, DataTable data, Long id);
	long getId()
  {
    return id;
  }
  
  public Date getInstantiationtime()
  {
    return instantiationtime;
  }
  
  public Date getCreationtime()
  {
    return creationtime;
  }
  
  public String getContext()
  {
    return context;
  }
  
  public String getName()
  {
    return name;
  }
  
  public Date getExpirationtime()
  {
    return expirationtime;
  }
  
  public DataTable getAcknowledgementsTable()
  {
    try
    {
      return DataTableConversion.beansToTable(acknowledgements, Acknowledgement.FORMAT, false);
    }
    catch (DataTableException ex)
    {
      throw new IllegalStateException(ex);
    }
  }
  
  public DataTable getEnrichmentsTable()
  {
    try
    {
      return DataTableConversion.beansToTable(enrichments, Enrichment.FORMAT, false);
    }
    catch (DataTableException ex)
    {
      throw new IllegalStateException(ex);
    }
  }
  
  public void setAcknowledgementsTable(DataTable data)
  {
    try
    {
      acknowledgements = DataTableConversion.beansFromTable(data, Acknowledgement.class, Acknowledgement.FORMAT, false);
    }
    catch (DataTableException ex)
    {
      throw new IllegalStateException(ex);
    }
  }
  
  public void setEnrichmentsTable(DataTable data)
  {
    try
    {
      enrichments = DataTableConversion.beansFromTable(data, Enrichment.class, Enrichment.FORMAT, false);
    }
    catch (DataTableException ex)
    {
      throw new IllegalStateException(ex);
    }
  }
  
  public void addAcknowledgement(Acknowledgement ack)
  {
    acknowledgements.add(ack);
  }
  
  public List<Acknowledgement> getAcknowledgements()
  {
    return acknowledgements;
  }
  
  public void addEnrichment(Enrichment enrichment)
  {
    enrichments.add(enrichment);
  }
  
  public List<Enrichment> getEnrichments()
  {
    return enrichments;
  }
  
  public void setId(Long id)
  {
    this.id = id;
  }
  
  public void setCreationtime(Date creationtime)
  {
    this.creationtime = creationtime;
  }
  
  public void setName(String name)
  {
    this.name = name;
  }
  
  public void setContext(String context)
  {
    this.context = context;
  }
  
  public void setExpirationtime(Date expirationtime)
  {
    this.expirationtime = expirationtime;
  }
  
  public void setData(DataTable data)
  {
    this.data = data;
  }
  
  public void setListener(Integer listener)
  {
    this.listener = listener;
  }
  
  public void setLevel(int level)
  {
    this.level = level;
  }
  
  public void setOriginator(Object originator)
  {
    this.originator = originator;
  }
  
  public DataTable getData()
  {
    return data;
  }
  
  public Integer getListener()
  {
    return listener;
  }
  
  public int getLevel()
  {
    return level;
  }
  
  public Permissions getPermissions()
  {
    return permissions;
  }
  
  public void setPermissions(Permissions permissions)
  {
    this.permissions = permissions;
  }
  
  public Object getOriginator()
  {
    return originator;
  }
  
  public int getCount()
  {
    return count;
  }
  
  public void setCount(int count)
  {
    this.count = count;
  }
  
  public String getDeduplicationId()
  {
    return deduplicationId;
  }
  
  public void setDeduplicationId(String deduplicationId)
  {
    this.deduplicationId = deduplicationId;
  }
  
  @Override
  public Event clone()
  {
    try
    {
      Event clone = (Event) super.clone();
      clone.acknowledgements = (List) CloneUtils.deepClone(acknowledgements);
      clone.enrichments = (List) CloneUtils.deepClone(enrichments);
      return clone;
    }
    catch (CloneNotSupportedException ex)
    {
      throw new IllegalStateException(ex);
    }
  }
  
  @Override
  public int hashCode()
  {
    final int prime = 31;
    int result = 1;
    result = prime * result + ((id == null) ? 0 : id.hashCode());
    return result;
  }
  
  @Override
  public boolean equals(Object obj)
  {
    if (this == obj)
      return true;
    if (obj == null)
      return false;
    if (getClass() != obj.getClass())
      return false;
    Event other = (Event) obj;
    if (id == null || other.id == null)
    {
      return false;
    }
    else if (!id.equals(other.id))
      return false;
    return true;
  }
  
  @Override
  public String toString()
  {
    return "Event '" + name + "' in context '" + context + "': " + (data != null ? data.dataAsString() : "no data") + (listener != null ? ", for listener '" + listener + "'" : "");
  }
};
#endif //_EVENT_H_
